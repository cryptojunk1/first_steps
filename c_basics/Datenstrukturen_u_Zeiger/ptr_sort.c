/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ptr_sort.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmessner <rmessner@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 10:22:24 by rmessner          #+#    #+#             */
/*   Updated: 2023/10/15 20:24:50 by rmessner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

#define SIZE 8

int main()
{
    char *names[] =
    {
        "Micky",
        "Minnie",
        "Donald",
        "Daisy",
        "Goofy",
        "Tick",
        "Trick",
        "Track"
    };

    char *temp;
    int i, a, b;

    for(a = 0; a < SIZE - 1; a++)
    {
        for(b = a + 1; b < SIZE - 1; b++)   //b wird auf eins nach a gesetzt um nächsten string zu überprüfen
        {
            if(*names[a] > *names[b])
            {
                temp = names[a];
                names[a] = names[b];
                names[b] = temp;
            }
        }
    }
    for (i = 0; i < SIZE; i++)
        printf("%s\n", names[i]);
    return (0);
}