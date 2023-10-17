/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hurray.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmessner <rmessner@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 19:48:37 by rmessner          #+#    #+#             */
/*   Updated: 2023/10/08 20:00:58 by rmessner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

const int   maxelements = 20;

int rnd(int range);
void seedrnd(void);

int main()
{
    int blorf[maxelements];
    int x;

    /* Erster Durchgang, Zahlen 1...20 */
    printf("Initialisiere Array mit Werten 1..20:\n");

    for(x = 0; x < maxelements; x++)
    {
        blorf[x] = x + 1;
        printf("%2i\x20", blorf[x]);
    }
    /* Zweiter Durchgang Zahlen 20...1 */
    printf("\nNun mit Werten von 20...1:\n");

    for (x = 0; x < maxelements; x++)
    {
        blorf[x] = 20 - x;
        printf("%2i\x20", blorf[x]);
    }
    /* Dritter Durchgang */
    printf("\nUnd nun Zufallszahlen:\n");

    for(x = 0; x < maxelements; x++)
    {
        blorf[x] = rnd(20);
        printf("%2i\x20", blorf[x]);
    }
    return (0);
}

int rnd(int range)
{
    int x;

    x = rand() % range + 1;
    return (x);
}

void    seedrnd(void)
{
    srand((unsigned)time(NULL));
}