/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   speed2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmessner <rmessner@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 15:12:11 by rmessner          #+#    #+#             */
/*   Updated: 2023/10/03 15:13:06 by rmessner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

#define tempolimit 100

int main()
{
    printf("Die Geschwindingkeitsbegrenzung betraegt hier %i km/h!\n", tempolimit);
    printf("Gemessen habe ich leider %i km/h.\n", tempolimit + 25);
    printf("Haben Sie das Schild mit der %i nicht gesehen?\n", tempolimit);
    return (0);
}