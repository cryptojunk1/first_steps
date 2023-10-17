/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lobby1.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmessner <rmessner@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 12:13:45 by rmessner          #+#    #+#             */
/*   Updated: 2023/10/08 12:21:43 by rmessner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Kino-Snackbar-Programm */

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
    if (c == 'G')       // Getraenke
        printf("Getraenk\nDas kostet EUR 3,- \n");
    else if (c == 'S')       // Suessigkeiten
        printf("Suessigkeiten\nDas kostet EUR 2,50 \n");
    else if (c == 'H')       // HotDogs
        printf("HotDog\nDas kostet EUR 4,- \n");
    else if (c == 'P')       // Popcorn
        printf("Popcorn\nDas kostet EUR 3,50 \n");
    else
    {
        printf("\nKeine gültige Auswahl.\n");
        printf("Warscheinlich sind Sie gar nicht hungrig. \n");
        printf("Der Naechste bitte! \n");
    }
    return (0);
}