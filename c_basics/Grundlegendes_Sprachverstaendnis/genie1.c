/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   genie1.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmessner <rmessner@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 10:27:55 by rmessner          #+#    #+#             */
/*   Updated: 2023/10/04 10:40:17 by rmessner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Programm prüft ob eine eingegebene Zahl von -99 bis 99 größer oder kleiner 5 ist*/

#include <stdio.h>
#include <stdlib.h>

#define MAXEINGABE 3

int main()
{
    int     zahl;
    char    eingabe[MAXEINGABE];

    printf("Ich bin ihr Computergenie! \n");

    printf("Geben Sie eine Zahl ein: ");
    fgets(eingabe, MAXEINGABE, stdin);
    zahl = atoi(eingabe);

    if (zahl < 5)
    {
        printf("Zahl ist kleiner als 5\n");
    }
    else if (zahl == 5 )
    {
        printf("Scherz.... Naja 5 Halt... Das gleiche... Ach leck mich!\n");
    }
    else
        printf("Zahl ist größer als 5!\n");
    printf("Das Computergenie sieht alles und weiß alles!! :)\n");
    return (0);
}