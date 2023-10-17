/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lets_go.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmessner <rmessner@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 13:34:42 by rmessner          #+#    #+#             */
/*   Updated: 2023/10/12 13:47:00 by rmessner         ###   ########.fr       */
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
        char planets[MAXLAENGE];
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

    puts("Daten des Sonnensystems!");

    for(x = 0; x < MAXPLANETS; x++)
    {
        printf("Planet: %i: %s, Bewohner: %.0f\n", x + 1, planets[x].planets, planets[x].population);
    }

    puts("\nNun tauschen wir mit Jupiter:");

    /* Jupiterdaten nach temp kopieren */
    strcpy(temp.planets, planets[4].planets);
    temp.population = planets[4].population;

    /* Erde nach Jupiter kopieren */
    strcpy(planets[4].planets, planets[2].planets);
    planets[4].population = planets[2].population;

    /* temp nach Erde kopieren */
    strcpy(planets[2].planets, temp.planets);
    planets[2].population = temp.population;

    for (x = 0; x < MAXPLANETS; x++)
        printf("Planet: %i: %s, Bewohner: %.0f\n", x + 1, planets[x].planets, planets[x].population);
    return (0);
}