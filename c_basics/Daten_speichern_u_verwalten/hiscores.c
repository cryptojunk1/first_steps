/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hiscores.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmessner <rmessner@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 15:16:46 by rmessner          #+#    #+#             */
/*   Updated: 2023/10/15 15:21:29 by rmessner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int main()
{
    FILE *scores;
    int  s[10] =
    {
        1000, 990, 985, 960, 955,
        950, 945, 945, 930
    };
    int x;

    scores = fopen("scores.dat", "w");
    if(scores == NULL)
    {
        puts("Dateifehler!");
    }
    else
    {
        for(x = 0; x < 10; x++)
        {
            fprintf(scores, "%i\n", s[x]);
        }
        fclose(scores);
        puts("Spielstaende gespeichert!");
    }
    return(0);
}