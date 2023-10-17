/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whoru3.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmessner <rmessner@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 08:03:07 by rmessner          #+#    #+#             */
/*   Updated: 2023/10/09 08:07:48 by rmessner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

const int eingabelaenge = 5;

int main()
{
    char me[eingabelaenge];
    int i;

    printf("Wie heissen Sie? ");
    fgets(me, eingabelaenge, stdin);

    for (i = eingabelaenge - 1; i >= 0; i--)
    {
        if(me[i] == '\n')
        {
            me[i] = 0x00;
            break;
        }
    }
    printf("Ihr Name lautet: %s! Schoener Name!\n", me);
    return (0);
}