/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   score.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmessner <rmessner@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 15:08:57 by rmessner          #+#    #+#             */
/*   Updated: 2023/10/13 15:13:47 by rmessner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int main()
{
    FILE *scores;
    int s;

    scores = fopen("scores.dat", "r");
    if(scores == NULL)
    {
        puts("Dateifehler");
    }
    else
    {
        fscanf(scores, "%i", &s);
        fclose(scores);
        printf("Spielstand: %i\n", s);
    }
    return (0);
}