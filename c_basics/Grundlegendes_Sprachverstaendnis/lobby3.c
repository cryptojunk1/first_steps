/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lobby3.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmessner <rmessner@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 12:37:29 by rmessner          #+#    #+#             */
/*   Updated: 2023/10/08 12:48:00 by rmessner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>

#define FALSE 0
#define TRUE !FALSE

int main()
{
    char c;
    int  fertig;
    float total = 0;

    printf("Angebot:\n");
    printf("G - Getraenk. \n");
    printf("S - Suessigkeiten. \n");
    printf("H - Hotdogs. \n");
    printf("P - Popcorn. \n");
    printf("= - Zum Ausgang. \n");
    printf("Ihre Auswahl: ");

/* Was hat der Kunde eingegeben? */
    fertig = FALSE;
    while (!fertig)
    {
        c = (char)toupper(getchar());
        switch (c)
        {
            case 'G':
                printf("Getraenk\nDas kostet EUR 3,- \n");
                total += 3.0f;
                break;
            case 'S':   //Suessiglkeiten
                printf("Suessigkeit\nDas kostet EUR 2,50 \n");
                total += 2.5f;
                break;
            case 'H':   //HotDogs
                printf("HotDog\nDas kostet EUR 4,- \n");
                total += 4.0f;
                break;
            case 'P':   //Popcorn
                printf("Popcorn\nDas kostet EUR 3,50 \n");
                total += 3.5f;
                break;
            case '=':
                printf("Das macht insegsamt %.2f EUR bitte!\n", total);
                printf("Bitte bezahlen Sie an der Kasse!\n");
                fertig = TRUE;
        }
    }
    return (0);
}