/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   linda3.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmessner <rmessner@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 18:00:49 by rmessner          #+#    #+#             */
/*   Updated: 2023/10/11 18:13:10 by rmessner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void peasoup(int *green);

int main()
{
    int turn;
    int *t;

    turn = 13;
    t = &turn;

    peasoup(t);

    printf("Oh, nein, es ist %i!\n", *t);
    
    return (0);
}

void peasoup(int *green)
{
    while((*green)--)
    {
        puts("Blech!");
    }
    *green = 13 * 51 + 3;
}