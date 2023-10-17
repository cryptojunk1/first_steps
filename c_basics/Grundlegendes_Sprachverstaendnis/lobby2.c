/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lobby2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmessner <rmessner@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 12:22:43 by rmessner          #+#    #+#             */
/*   Updated: 2023/10/08 12:27:47 by rmessner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Übung mit switch/case */

#include <stdio.h>
#include <ctype.h>

int main()
{
    char c;

    printf("Angebot:\n");
    printf("G - Getraenk. \n");
    printf("S - Suessigkeiten. \n");
    printf("H - Hotdogs. \n");
    printf("P - Popcorn. \n");
    printf("Ihre Auswahl: ");

/* Was hat der Kunde eingegeben? */
    c = (char)toupper(getchar());
    switch (c)
    {
        case 'G':   //Getraenke
            printf("Getraenk\nDas kostet EUR 3,- \n");
            break;
        case 'S':   //Suessiglkeiten
            printf("Suessigkeit\nDas kostet EUR 2,50 \n");
            break;
        case 'H':   //HotDogs
            printf("HotDog\nDas kostet EUR 4,- \n");
            break;
        case 'P':   //Popcorn
            printf("Popcorn\nDas kostet EUR 3,50 \n");
            break;
        default:
            printf("\nKeine gültige Auswahl.\n");
            printf("Warscheinlich sind Sie gar nicht hungrig. \n");
            printf("Der Naechste bitte! \n");
    }
    return (0);
}