/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   scores.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmessner <rmessner@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 15:22:48 by rmessner          #+#    #+#             */
/*   Updated: 2023/10/15 15:26:24 by rmessner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int main()
{
    FILE *scores;
    int s[10];
    int x;

    scores = fopen("scores.dat", "r");
    if(scores == NULL)
    {
        puts("Dateifehler!");
    }
    else
    {
        for (x = 0; x < 10; x++)
        {
            fscanf(scores, "%i\n", &s[x]);
        }
        fclose(scores);

        puts("Spielstaende:");
        for (x = 0; x < 10; x++)
        {
            printf("%i\n", s[x]);
        }
    }
    return (0);
}