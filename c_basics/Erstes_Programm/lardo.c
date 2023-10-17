/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lardo.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmessner <rmessner@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 09:21:05 by rmessner          #+#    #+#             */
/*   Updated: 2023/10/04 10:27:32 by rmessner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Berechnet Gewichtzunahme pro Festessen 
*  Übung zum Inkrementieren */

#include <stdio.h>
#include <stdlib.h>

#define MAXEINGABE 4

int main()
{
    char    gewicht[MAXEINGABE];
    int     g;

    printf("Geben Sie Ihr Gewicht ein: ");
    fgets(gewicht, MAXEINGABE, stdin);
    g = atoi(gewicht);

    printf("So vie wiegen Sie jetzt: '%i'\n", g);
    g = g + 1;
    printf("Ihr Gewicht nach Essen der Kartoffeln: '%i'\n",g);
    g = g + 1;
    printf("Ihr Gewicht nach Essen des Steaks: '%i'\n",g);
    g = g + 8;
    printf("Und noch das Dessert: '%i'\n",g);
    printf("Du alter Vielfrass!!\n");
    return (0);
}