/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   metric.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmessner <rmessner@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 12:06:22 by rmessner          #+#    #+#             */
/*   Updated: 2023/10/10 12:11:27 by rmessner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Umrechnung auf das Metrische System */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

const int maxeingabe = 20;

int main()
{
    char input[maxeingabe];
    double miles;
    double kilometers;

    printf("Geben Sie einen Wert in Meilen ein: ");
    miles = atof(fgets(input, maxeingabe, stdin));

    kilometers = miles * 1.609;

    printf("%.2f Meilen sind %.2f Kilometer.\n", miles, kilometers);

    return (0);
}