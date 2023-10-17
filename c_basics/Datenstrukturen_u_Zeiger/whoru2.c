/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whoru2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmessner <rmessner@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 07:50:43 by rmessner          #+#    #+#             */
/*   Updated: 2023/10/09 08:01:22 by rmessner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

const int eingabelaenge = 5;

int main()
{
    char me[5];

    printf("Geben Sie Ihren Namen ein: ");
    fgets(me, eingabelaenge, stdin);
    printf("Ihr Name lautet \"%s\"! Cooler Name!\n", me);
    return (0);
}