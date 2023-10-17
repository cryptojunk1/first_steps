/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sortbig.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmessner <rmessner@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 08:37:11 by rmessner          #+#    #+#             */
/*   Updated: 2023/10/09 09:03:34 by rmessner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int rnd(int range);
void seedrnd(void);
void sort(int *array, int size);


const int maxsize = 1000;

int main()
{
    int numbers[maxsize];
    int i;

    seedrnd();
    i = 0;
    printf("Hier das Unsortierte Array:\n");
    while(i < maxsize)
    {
        numbers[i] = rnd(maxsize);
        printf("%i\t", numbers[i]);
        i++;
    }
    printf("\n Eingabe druecken zur Ausgabe: ");
    getchar();
    printf("\n");
    
    sort(numbers, maxsize);

    printf("\nHier das sortierte Array:\n");
    i = 0;
    while(i < maxsize)
    {
        printf("%i\t", numbers[i]);
        i++;
    }
    return (0);
}

int rnd(int range)
{
    int r;

    r = rand() % range + 1;
    return (r);
}

void    seedrnd(void)
{
    srand((unsigned)time(NULL));
}

void    sort(int *array, int size)
{
    int a;
    int b;
    int temp;

    a = 0;
    b = a + 1;
    while(a < size - 1)
    {
        while(b < size - 1)
        {
            if(array[a] > array[b])
            {
                temp = array[b];
                array[b] = array[a];
                array[a] = temp;
            }
            b++;
        }
        a++;
        b = a + 1;
    }
}