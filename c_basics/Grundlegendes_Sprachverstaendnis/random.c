/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   random.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmessner <rmessner@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 14:28:34 by rmessner          #+#    #+#             */
/*   Updated: 2023/10/05 14:34:55 by rmessner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int rnd(void);

int main()
{
    int i;

    /* 100 Zufallszahlen ausgeben */
    for (i = 0; i < 100; i++)
    {
        printf("%i\t", rnd());
    }
    printf("\n%i", RAND_MAX);
    return (0);
}

int rnd(void)
{
    int x;

    x = rand();
    return (x);
}