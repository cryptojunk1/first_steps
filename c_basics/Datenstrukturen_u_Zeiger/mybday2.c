/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mybday2.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmessner <rmessner@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 14:19:58 by rmessner          #+#    #+#             */
/*   Updated: 2023/10/12 14:38:43 by rmessner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

#define EINGABELAENGE 20

struct date
{
    int month;
    int day;
    int year;
};

struct family
{
    char name[EINGABELAENGE];
    struct date birthday;
};

struct family getdata(int member);
void print_data(struct family person);

char *entferneNL(char *str)
{
    char *str2 = str;
    while (*str2)
    {
        if(*str2 == '\n')
            *str2 = '\0';
        str2++;
    }
    return (str);
}

int main()
{
    int x, f;
    char numb[3];
    struct family myfamily[10];

    printf("Wie viele Personen hat Ihre Familie?");
    f = atoi(fgets(numb, EINGABELAENGE, stdin));

    printf("Bitte die Daten von jedem Familienmitglied:");

    for(x = 0; x < f; x++)
        myfamily[x] = getdata(x);
    
    puts("\nHier die Daten Ihrer Familie:");

    for(x = 0; x < f; x++)
        print_data(myfamily[x]);
    return (0);
}

/* Jedes Element der Struktur fuellen */
struct family getdata(int member)
{
    struct family new;
    char input[EINGABELAENGE];

    printf("Familienmitglied %i:\n", member + 1);

    /* Namen holen */
    printf("Name: ");
    fgets(new.name, EINGABELAENGE, stdin);
    entferneNL(new.name);

    /*Geburtsdaten holen*/
    puts("Geburtstag:");
    printf("Tag: ");
    new.birthday.day = atoi(fgets(input, EINGABELAENGE, stdin));
    printf("Monat: ");
    new.birthday.month = atoi(fgets(input, EINGABELAENGE, stdin));
    printf("Jahr: ");
    new.birthday.year = atoi(fgets(input, EINGABELAENGE, stdin));

    return (new);
}

void print_data(struct family person)
{
    printf("%s wurde geboren am %i.%i.%i\n", person.name, person.birthday.day, person.birthday.month, person.birthday.year);
}