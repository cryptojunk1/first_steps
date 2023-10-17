/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   random4.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmessner <rmessner@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 15:00:45 by rmessner          #+#    #+#             */
/*   Updated: 2023/10/05 15:04:35 by rmessner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int     rnd(int bereich);
void    seedrnd(void);

int main()
{
    int x;
    
    seedrnd();
    for (x = 0; x < 100; x++)
    {
        printf("%i\t", rnd(10));
    }
    return (0);
}

int rnd(int bereich)
{
    int r;

    r = rand() % bereich + 1;
    return (r);
}

void    seedrnd(void)
{
    srand((unsigned)time(NULL));
}