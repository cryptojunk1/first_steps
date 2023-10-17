/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lotto.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmessner <rmessner@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 20:03:12 by rmessner          #+#    #+#             */
/*   Updated: 2023/10/08 20:14:15 by rmessner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* Zahlenbereich */
const int maxrange = 49;
/* Ziehungen */
const int maxballs = 6;

int rnd(int range);
void seedrnd(void);

int main()
{
    /* Array fuer die Kugeln */
    int numbers[maxrange];
    int i, b;

    printf("L O T T O  Z I E H U N G\n\n");
    seedrnd();

    /* Array fuellen */
    for (i = 0; i < maxrange; i++)
    {
        numbers[i] = 0;
    }
    printf("Druecken Sie Eingabe fuer die Zahlen dieser Woche:");
    getchar();

    /* Zahlen ziehen */
    printf("\nEs geht los: ");
    for(i = 0; i < maxballs; i++)
    {
        /* Zahl ziehen und pruefen, ob sie schon gezogen wurde */
        do
        {
            b = rnd(maxrange);
        } while (numbers[b - 1]);   // bereits gezogen
        
        numbers[b - 1] = 1;         //als gezogen markieren
        printf("%i ", b);
    }
    printf("\nViel Glueck!\n");
    return (0);
}

int rnd(int range)
{
    int r;

    r = rand() % range + 1;
    return (r);
}

void seedrnd(void)
{
    srand((unsigned)time(NULL));
}