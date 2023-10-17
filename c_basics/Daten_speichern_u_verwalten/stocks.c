/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stocks.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmessner <rmessner@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 15:31:26 by rmessner          #+#    #+#             */
/*   Updated: 2023/10/15 17:40:56 by rmessner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

#define FALSE 0
#define TRUE !FALSE

#define EINGABELAENGE 40

struct stock_data
{
    char name[EINGABELAENGE];
    float buy_price;
    float current_price;
};

void write_info(void);
void read_info(void);

int main()
{
    char c;
    int done = FALSE;

    while(!done)
    {
        puts("\nAktienportfolio\n");
        puts("N - Neue Aktie\n");
        puts("A - Anzeige Bestand\n");
        puts("E - Exit\n");
        puts("Ihre Wahl: ");
        
        fflush(stdout);  // Sicherstellen, dass die Ausgabe angezeigt wird
        c = (char)toupper(getchar());
        
        switch(c)
        {
            case 'N':
                puts("Neue Aktie\n");
                write_info();
                break;
            case 'A':
                puts("Anzeige Portfolio\n");
                read_info();
                break;
            case 'E':
                puts("Ende!\n");
                done = TRUE;
                break;
            default:
                puts("?");
                break;
        }
    }
    return (0);
}

void write_info(void)
{
    FILE *stocks;
    struct stock_data stock;
    char input[EINGABELAENGE + 1];

    printf("Aktienname: ");
    fflush(stdout);  // Sicherstellen, dass die Ausgabe angezeigt wird
    int ch;
    while ((ch = getchar()) != '\n' && ch != EOF);  // Leeren des Eingabepuffers
    
    fgets(stock.name, EINGABELAENGE, stdin);
    
    printf("Kaufkurs: ");
    fflush(stdout);
    fgets(input, EINGABELAENGE, stdin);
    stock.buy_price = (float)atof(input);
    stock.current_price = stock.buy_price / 11;

    stocks = fopen("stocks.dat", "a");
    if(stocks == NULL)
    {
        perror("Fehler beim Öffnen der Datei");
        exit(1);
    }

    fwrite(&stock, sizeof(stock), 1, stocks);
    fclose(stocks);
    puts("Aktie hinzugefügt!");
}



void read_info(void)
{
    FILE *stocks;
    struct stock_data stock;
    int x;

    stocks = fopen("stocks.dat", "r");
    if(stocks == NULL)
    {
        puts("Datei ist leer oder nicht vorhanden");
        return;
    }
    while(TRUE)
    {
        x = fread(&stock, sizeof(stock), 1, stocks);

        if (x == 0)
            break;
        printf("\nName: %s\n", stock.name);
        printf("Kaufpreis: EUR %.2f\n", stock.buy_price);
        printf("Aktueller Kurs: %.2f\n", stock.current_price);
    }
    fclose(stocks);
    int ch;
    while ((ch = getchar()) != '\n' && ch != EOF); 
}