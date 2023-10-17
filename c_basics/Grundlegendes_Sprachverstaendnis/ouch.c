/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ouch.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmessner <rmessner@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 11:44:25 by rmessner          #+#    #+#             */
/*   Updated: 2023/10/04 11:55:33 by rmessner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*for Schleifen*/

#include <stdio.h>

int main()
{
    int i;

    for(i = 0; i < 5; i++)
    {
        printf("Autsch, Hey lass das!\n");
    }
    printf("Dafür zähle ich jetzt bis 100!\n");

    for (i = 1; i < 101; i++)
    {
        printf("%i\t", i);
    }
    return (0);
}