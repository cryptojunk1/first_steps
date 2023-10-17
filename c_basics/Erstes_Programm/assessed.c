/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   assessed.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmessner <rmessner@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 10:11:34 by rmessner          #+#    #+#             */
/*   Updated: 2023/10/04 10:16:38 by rmessner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

#define MAXEINGABE 4

int main()
{
    int haeuser;
    int hotels;
    int total;
    char temp[MAXEINGABE];

    printf("Anzahl deiner Haeuser: ");
    fgets(temp, MAXEINGABE, stdin);
    haeuser = atoi(temp);

    printf("Anzahl deiner Hotels: ");
    fgets(temp, MAXEINGABE, stdin);
    hotels = atoi(temp);

    total = (haeuser * 40) + (hotels * 115);
    printf("Sie schulden der Bank %i EUR\n", total);

    return (0);
}