/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   methus3.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmessner <rmessner@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 14:16:47 by rmessner          #+#    #+#             */
/*   Updated: 2023/10/03 14:21:40 by rmessner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int     methus;
    int     sie;
    char    jahre[30];

    printf("Wie alt sind Sie? ");
    fgets(jahre, 20, stdin);
    sie = atoi(jahre);

    printf("Wie alt war Methusalem? ");
    fgets(jahre, 30, stdin);
    methus = atoi(jahre);
    
    printf("Sie sind %i Jahre alt!\n", sie);
    printf("Methusalem wurde insgesamt %i Jahre alt!\n", methus);

    return (0);
}