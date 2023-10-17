/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   methus4.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmessner <rmessner@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 14:27:59 by rmessner          #+#    #+#             */
/*   Updated: 2023/10/03 14:33:53 by rmessner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
* Berechne um wie viele Jahre du jünger bist als Methusalem
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int     diff;
    int     methus;
    int     sie;
    char    jahre[30];

    printf("Wie alt sind Sie? ");
    fgets(jahre, 30, stdin);
    sie = atoi(jahre);

    printf("Wie alt war Methusalem? ");
    fgets(jahre, 30, stdin);
    methus = atoi(jahre);

    diff = methus - sie;
    printf("Sie sind %i Jahre alt!\nMethusalem war %i Jahre alt!\nSie sind %i Jahre jünger als Methusalem!\n", sie, methus, diff);

    return (0);
}