/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Jupiter.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmessner <rmessner@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 16:06:47 by rmessner          #+#    #+#             */
/*   Updated: 2023/10/03 16:32:01 by rmessner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int main()
{
    float   lichtjahr;
    float   jupiter;
    float	entfernung;

    lichtjahr = 9.4605E12f;
    jupiter = 778000000.0f;

    entfernung = jupiter / lichtjahr;

    printf("Jupiter ist %f Lichtjahre von der Sonne entfernt.\n", entfernung);
    return (0);
    
}