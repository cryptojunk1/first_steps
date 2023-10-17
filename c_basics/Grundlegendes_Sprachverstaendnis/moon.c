/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moon.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmessner <rmessner@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 14:17:36 by rmessner          #+#    #+#             */
/*   Updated: 2023/10/07 14:23:45 by rmessner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* MOON.c
*  So viel würden Sie auf dem Mond wiegen!
*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int weight;

    if (argc < 2)
    {
        /*keine Parameter*/
        printf("Diese Programm braucht Ihr Gewicht in kg\n");
        printf("direkt nach moon, als beispiel:\n");
        printf("moon 55\n");
        exit (0);
    }
    /* argv[1] enthält das Gewicht */
    
    /*Gewicht holen und durch 6 teilen*/
    weight = atoi(argv[1]);
    weight /= 6;

    printf("Ihr Gewicht auf dem Mond beträgt: %i!\n", weight);
    return (weight);
}