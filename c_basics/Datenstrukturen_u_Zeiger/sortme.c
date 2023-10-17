/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sortme.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmessner <rmessner@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 08:10:00 by rmessner          #+#    #+#             */
/*   Updated: 2023/10/09 11:48:34 by rmessner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Programm sortiert ein Array von 1-... ; A - Z ; ... */

#include <stdio.h>

/* Groesse des Arrays */
const int SIZE = 6;

void    sort(int *array, int size);

int main()
{
    int lotto[] = {10, 48, 1, 25, 14, 6};
    int i;

    printf("Hier das unsortierte Array:\n");

    for (i = 0; i < SIZE; i++)
    {
        printf("%i\t", lotto[i]);
    }

    printf("\nUnd nun Sortiert:\n");

    sort(lotto, SIZE);

    for(i = 0; i < SIZE; i++)
    {
        printf("%i\t", lotto[i]);
    }
    return (0);
}

void    sort(int *array, int size) //Sortierfunktion
{
    int a;
    int b;
    int temp;

    for ( a = 0; a < size; a++)
    {
        for( b = a + 1; b < size; b++)
        {
            if(array[a] > array[b])
            {
                temp = array[b];
                array[b] = array[a];
                array[a] = temp;
            }
        }
    }
}