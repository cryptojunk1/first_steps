/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   random3.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmessner <rmessner@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 14:51:37 by rmessner          #+#    #+#             */
/*   Updated: 2023/10/05 14:55:16 by rmessner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Erstelle 100 Zufallszahlen auf Basis des Zeitstempels */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int     rnd(void);
void    seedrnd(void);

int main()
{
    int x;

    seedrnd();

    for (x = 0; x < 100; x++)
    {
        printf("%i\t", rnd());
    }
    return (0);
}

int rnd(void)
{
    int x;

    x = rand();

    return (x);
}

void    seedrnd(void)
{
    srand((unsigned)time(NULL));
}