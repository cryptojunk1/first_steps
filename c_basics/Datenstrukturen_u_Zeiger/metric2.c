/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   metric2.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmessner <rmessner@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 12:17:37 by rmessner          #+#    #+#             */
/*   Updated: 2023/10/10 12:36:01 by rmessner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

const int maxeingabe = 20;

int main()
{
    char input[maxeingabe];
    double miles, kilometers;
    double  *ptr_miles, *ptr_kilo;
    char    *ptr_input;

    ptr_miles = &miles;
    ptr_kilo = &kilometers;
    ptr_input = input;

    printf("Geben Sie einen Wert in Meilen ein: ");
    miles = atof(fgets(input, maxeingabe, stdin));

    kilometers = miles * 1.609;

    printf("%.2f Meilen sind %.2f Kilometer.\n", miles, kilometers);
    printf("%p ist die Speicheradresse von Miles.\n", ptr_miles);
    printf("%p ist die Speicheradresse von Kilometers.\n", ptr_kilo);
    printf("input hat die Groesse von %li auf Adresse %p\n", sizeof(input), ptr_input);
    printf("Die Größe von miles beträgt: %li\n", sizeof(miles));
    return (0);
}