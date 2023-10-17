/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bomber2.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmessner <rmessner@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 12:49:34 by rmessner          #+#    #+#             */
/*   Updated: 2023/10/05 12:55:50 by rmessner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int score;

void    dropBomb();

int main()
{
    char    x;
    score = 0;

    for (;;)        // Erzeugt Endlosschleife bis ~ gedrückt wird
    {
        printf("Taste ~ druecken, um die Mission zu beenden!\n");
        printf("Eingabe druecken, um Bomben abzuwerfen!\n");
        x = getchar();
        if (x == '~')
        {
            break;
        }
        dropBomb();
        printf("Treffer bisher: %i!\n", score);
    }
    return (0);
}

void    dropBomb()
{
    int x;

    for (x = 0; x < 15; x++)
    {
        printf("Wiiii....!\n");
    }
    printf("\nBUUUMMM\n");
    score += 15;
}