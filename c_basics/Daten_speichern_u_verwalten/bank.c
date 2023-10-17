/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bank.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmessner <rmessner@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 18:52:41 by rmessner          #+#    #+#             */
/*   Updated: 2023/10/15 20:24:28 by rmessner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <malloc.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

#define TEXTLAENGE 20

void clearInput(void);
void addNewAccount(void);
void listAll(void);
void deleteAccount(void);
void cleanUp(void);
void saveAccounts(void);
void loadAccounts(void);

struct account
{
    int number;
    char lastname[TEXTLAENGE + 1];
    char firstname[TEXTLAENGE + 1];
    float balance;
    struct account *next;
};

struct account *firsta;
int anum = 0;
char *filename = "bank.dat";

int main()
{
    char ch;
    firsta = NULL;

    loadAccounts();

    do
    {
        puts("\nN - Neues Konto");
        puts("A - Anzeige aller Konten");
        puts("L - Konto loeschen");
        puts("E - Ende\n");
        printf("\tIhre Wahl: ");
        ch = getchar();
        ch = toupper(ch);
        clearInput();

        switch(ch)
        {
            case 'N':
                puts("Ein neues Konto anlegen\n");
                addNewAccount();
                break;
            case 'A':
                puts("Alle Konten aufgelistet");
                listAll();
                break;
            case 'L':
                puts("Ein Konto loeschen\n");
                deleteAccount();
                break;
            case 'E':
                puts("Programmende\n");
                saveAccounts();
                cleanUp();
                default:
                break;
        }
    } while (ch != 'E');
    return (0);
}

void clearInput(void)
{
    while ((getchar()) != '\n');
}

char *entferneNL(char *string)
{
    char *string2 = string;
    while(*string2)
    {
        if(*string2 == '\n')
            *string2 = '\0';
        string2++;
    }
    return (string);
}

void addNewAccount(void)
{
    struct account *currenta;
    struct account *newa;

    char amount[TEXTLAENGE + 1];
    newa = malloc(sizeof(struct account));

    /* Ist der erste Datensatz?
    * falls ja, dann alle Zeiger darauf einrichten
     */
    if(firsta == NULL)
        firsta = currenta = newa;
    /* Andernfalls das Ende der Liste finden und die neue Struktur am Ende einfuegen */
    else
    {
        currenta = firsta;

        while(currenta->next != NULL)
            currenta = currenta->next;
        /* der letzte Datensatz gefunden */
        currenta->next = newa;      // die Adresse des neuen speichern
        currenta = newa;
    }
    /* Jetzt die Struktur fuellen */
    anum++;
    printf("%27s: %5i\n", "Kontonummer", anum);
    currenta->number = anum;

    printf("%27s: ", "Nachnahme des Kunden");
    fgets(currenta->lastname, TEXTLAENGE, stdin);
    entferneNL(currenta->lastname);

    printf("%27s: ", "Vorname des Kunden");
    fgets(currenta->firstname, TEXTLAENGE, stdin);
    entferneNL(currenta->firstname);

    printf("%27s ", "Kontostand");
    fgets(amount, TEXTLAENGE, stdin);
    currenta->balance = atof(amount);

    /*
    *   Der neue Datensatz ist das letzte Element
    *   der Liste, also auch kennzeichnen
    */
   currenta->next = NULL;
}

void listAll(void)
{
    struct account *currenta;

    if(firsta == NULL)
        printf("Es gibt keine Kontodaten.\n");
    else
    {
        printf("%6s %-15s %-15s %-11s\n", "Konto", "Nachname", "Vorname", "Saldo");
        currenta = firsta;
        do
        {
            printf("%5d: %-15s %-15s EUR%8.2f\n", currenta->number, currenta->lastname, currenta->firstname, currenta->balance);
        } while ((currenta = currenta->next) != NULL);       
    }
}

/* Funktion zum loeschen eines Accounts */

void deleteAccount(void)
{
    int record;
    struct account *previousa;
    struct account *currenta;
    char delaccount[TEXTLAENGE + 1];

    if(firsta == NULL)
    {
        puts("Keine Datensaetze in der Datenbank");
        return;
    }
    listAll();
    printf("Zu loeschende Kontonummer eingeben: ");
    fgets(delaccount, TEXTLAENGE, stdin);
    record = atof(delaccount);

    currenta = firsta;
    while (currenta != NULL)
    {
        if(currenta->number == record)
        {
            if(currenta == firsta) //besonderheit
                firsta = currenta->next;
            else
                previousa->next = currenta->next;
            free(currenta);
            printf("Konto %d geloescht!\n", record);
            return;
        }
        else
        {
            previousa = currenta;
            currenta = currenta->next;
        }
    }
    printf("Konto %d wurde nicht gefunden, keine Loeschung.\n", record);
}

/* Funktion zum Aufräumen bei schließen des Programms */
void cleanUp(void)
{
    struct account *currenta;
    struct account *removea;

    currenta = firsta;
    while(currenta)
    {
        removea = currenta;
        currenta = currenta->next;
        free(removea);
    }
}

/* Funktion zum Speichern der Datei */
void saveAccounts(void)
{
    FILE *datafile;
    struct account *currenta = firsta;

    if(currenta == NULL)
        return;
    
    datafile = fopen(filename, "w");
    if(datafile == NULL)
    {
        printf("Schreibfehler in Datei %s.\n", filename);
        return;
    }
    while(currenta != NULL)
    {
        fwrite(currenta, sizeof(struct account), 1, datafile);
        currenta = currenta->next;
    }
    fclose(datafile);
}

/* Funktion zum Laden der Datei */

void loadAccounts(void)
{
    FILE *datafile;
    struct account *newa;
    struct account *currenta;
    firsta = NULL;

    datafile = fopen(filename, "r");
    if(datafile)
    {
        firsta = malloc(sizeof(struct account));
        currenta = firsta;
        while(1)
        {
            newa = malloc(sizeof(struct account));
            fread(currenta, sizeof(struct account), 1, datafile);
            if(currenta->next == NULL)
            break;
        currenta->next = newa;
        currenta = newa;
        }
        fclose(datafile);
        anum = currenta->number;
    }
}