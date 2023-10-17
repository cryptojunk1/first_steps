/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hiscore.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmessner <rmessner@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 15:02:50 by rmessner          #+#    #+#             */
/*   Updated: 2023/10/13 15:05:47 by rmessner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int main()
{
    FILE *scores;
    int s = 1000;

    scores = fopen("scores.dat", "w");
    if (scores == NULL)
    {
        puts("Dateifehler");
    }
    else
    {
        fprintf(scores, "%i", s);
        fclose(scores);
        puts("Spielstand gespeichert");
    }
    return (0);
}