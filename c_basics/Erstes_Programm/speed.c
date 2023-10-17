/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   speed.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmessner <rmessner@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 15:00:57 by rmessner          #+#    #+#             */
/*   Updated: 2023/10/03 15:11:48 by rmessner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

/*
* Übung zu Konstanten
*/
/*
int main()
{
    printf("Die Geschwindingkeitsbegrenzung betraegt hier %i km/h!\n", 100);
    printf("Gemessen habe ich leider %i km/h.\n", 100 + 25);
    printf("Haben Sie das Schild mit der %i nicht gesehen?\n", 100);
    return (0);
}
*/

int main()
{
    const int tempolimit = 100;
    printf("Die Geschwindingkeitsbegrenzung betraegt hier %i km/h!\n", tempolimit);
    printf("Gemessen habe ich leider %i km/h.\n", tempolimit + 25);
    printf("Haben Sie das Schild mit der %i nicht gesehen?\n", tempolimit);
    return (0);


}