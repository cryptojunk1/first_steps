/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   height.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmessner <rmessner@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 09:10:30 by rmessner          #+#    #+#             */
/*   Updated: 2023/10/04 09:17:47 by rmessner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


/*
* Umrechnung der Körpergröße von cm auf Zoll
*/

#include <stdio.h>
#include <stdlib.h>

#define MAXEINGABE 20

int main()
{
    float   groesse_in_zoll;
    char    groesse[MAXEINGABE];

    printf("Ihre Koerpergroesse in cm bitte: ");
    fgets(groesse, MAXEINGABE, stdin);
    groesse_in_zoll = atoi(groesse) / 2.54 * 1.05;
    printf("Das sind %.2f Zoll\n", groesse_in_zoll);

    return (0);
}