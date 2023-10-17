/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lets_go2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmessner <rmessner@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 13:49:56 by rmessner          #+#    #+#             */
/*   Updated: 2023/10/12 13:57:02 by rmessner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

#define MAXLAENGE 10
#define MAXPLANETS 8

int main()
{
    struct solarsystem
    {
        char planet[MAXLAENGE];
        double population;
    };

    struct solarsystem planets[MAXPLANETS] =
    {
        {"Merkur", 0},
        {"Venus", 0},
        {"Erde", 8.3E9},
        {"Mars", 10},
        {"Jupiter", 0},
        {"Saturn", 0},
        {"Uranus", 0},
        {"Neptun", 0}
    };
    struct solarsystem temp;
    int x;

    puts("Daten des Sonnensystems");

    for(x = 0; x < MAXPLANETS; x++)
        printf("Planet %i: %s, Bewohner: %.0f\n", x + 1, planets[x].planet, planets[x].population);

    puts("\nNun tauschen wir mit Jupiter:");

    /* Jupiter tauscht mit temp */
    temp = planets[4];
    /*Erde nach Jupiter kopieren*/
    planets[4] = planets[2];
    /*temp nach Erde kopieren*/
    planets[2] = temp;

    for(x = 0; x < MAXPLANETS; x++)
    {
        printf("Planet %i: %s, Bewohner: %.0f\n", x + 1, planets[x].planet, planets[x].population);
    }
    return(0);
}