/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   random2.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmessner <rmessner@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 14:39:09 by rmessner          #+#    #+#             */
/*   Updated: 2023/10/05 14:49:31 by rmessner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int     rnd();
void 	seedrnd(void);

int main()
{
    int x;

    seedrnd();

    /* 100 Zufallszahlen erstellen */
    for (x = 0; x < 100; x++)
        printf("%i\t", rnd());
    
    return (0);
}

int rnd(void)
{
    int num;

    num = rand();
    return (num);
}

void    seedrnd(void)
{
    int     seed;
    char    s[6];

    printf("Geben Sie einen Wert ein: ");
    seed = atoi(fgets(s, 6, stdin));
    srand(seed);
    return;

}