/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ptr_sort3.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmessner <rmessner@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 11:20:18 by rmessner          #+#    #+#             */
/*   Updated: 2023/10/12 11:26:36 by rmessner         ###   ########.fr       */
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
        for( b = a + 1; b < SIZE; b++)
        {
            x = 0;
            while(*(*(names + a)+ x))
            {
                if(*(*(names + a)+ x) > *(*(names + b)+ x))
                {
                    temp = *(names + a);
                    *(names + a) = *(names + b);
                    *(names + b) = temp;
                }
                else if(*(*(names + a)+ x) < *(*(names + b)+ x))
                    break;
                else
                    x++;
            }
        }
    for (x = 0; x < SIZE; x++)
        printf("%s\n", names[x]);
    return (0);
}