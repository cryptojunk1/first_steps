/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   grid.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmessner <rmessner@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 11:20:02 by rmessner          #+#    #+#             */
/*   Updated: 2023/10/09 11:27:44 by rmessner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int main()
{
    int a, b, r1, r2, r3, c1, c2, c3;
    int array[3][3] =
    {
        {1, 8, 6},
        {5, 3, 7},
        {9, 4, 2}
    };

    puts("Wir praesentieren das magische Quadrat!\n");

    for (a = 0; a < 3; a++)
    {
        for(b = 0; b < 3; b++)
        {
            printf("%i\t", array[a][b]);
        }
        printf("\n");
    }

    r1 = array[0][0] + array[0][1] + array[0][2];
    r2 = array[1][0] + array[1][1] + array[1][2];
    r3 = array[2][0] + array[2][1] + array[2][2];
    c1 = array[0][0] + array[1][0] + array[2][0];
    c2 = array[0][1] + array[1][1] + array[2][1];
    c3 = array[0][2] + array[1][2] + array[2][2];

    printf("\nDie Summe fuer Zeile 1 ist %i.\n", r1);
    printf("\nDie Summe fuer Zeile 2 ist %i.\n", r2);
    printf("\nDie Summe fuer Zeile 3 ist %i.\n", r3);
    printf("\nDie Summe fuer Spalte 1 ist %i.\n", c1);
    printf("\nDie Summe fuer Spalte 2 ist %i.\n", c2);
    printf("\nDie Summe fuer Spalte 3 ist %i.\n", c3);
    return (0);
}