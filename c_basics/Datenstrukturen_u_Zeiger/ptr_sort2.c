/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ptr_sort2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmessner <rmessner@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 11:03:36 by rmessner          #+#    #+#             */
/*   Updated: 2023/10/12 11:12:16 by rmessner         ###   ########.fr       */
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
    int x, a, b;

    for(a = 0; a < SIZE - 1; a++)
        for(b = a + 1; b < SIZE; b++)
        {
            if(**(names + a) > **(names + b))
            {
                temp = *(names + a);
                *(names + a) = *(names + b);
                *(names + b) = temp;
            }
        }
    for (x = 0; x < SIZE; x++)
        printf("%s\n", names[x]);
    return (0);
}