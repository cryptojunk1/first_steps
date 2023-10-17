/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   addarray.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmessner <rmessner@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 18:37:09 by rmessner          #+#    #+#             */
/*   Updated: 2023/10/11 18:55:25 by rmessner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

#define SIZE 9

void print_array(int *array, int size);
int *caffeine(int *array1, int *array2, int size);

int main()
{
    int joe[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
    int java[] = { 9, 8, 7, 6, 5, 4, 3, 2, 1 };
    int *coffee;

    puts("Erstes Array: ");
    print_array(joe, SIZE);

    puts("\nZweites Array: ");
    print_array(java, SIZE);

    coffee = caffeine(joe, java, SIZE);

    for(int i = 0; i < SIZE; i++)
        putchar('=');
    puts("\nDrittes Array: ");
    print_array(coffee, SIZE);

    return (0);
}

void print_array(int *array, int size)
{
    int i = 0;

    while(size--)
    {
        printf("#%i = %i\n", i + 1, *array);
        i++;
    }
}

int *caffeine(int *array1, int *array2, int size)
{
    int static total[SIZE];
    int i;

    for (i = 0; i < size; i++)
        total[i] = array1[i] + array2[i];
    
    return (total);
}