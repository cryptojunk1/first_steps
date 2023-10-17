/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   oz6.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmessner <rmessner@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 13:23:23 by rmessner          #+#    #+#             */
/*   Updated: 2023/10/12 13:28:28 by rmessner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

#define MAXNAME 30

int main()
{
    struct oz
    {
        char actor[MAXNAME];
        char character[MAXNAME];
        int  age;
    };

    struct oz actor[4] =
    {
        {"Judy Garland", "Dorothy", 17}, 
        {"Ray Bolger", "Scarecrow", 35},
        {"Bert Lehr", "Cowardly Lion", 44},
        {"Jack Harley", "Tin Woodsman", 40}
    };

    int x;

    puts("Datenbank zum Zauberer von Oz!");

    for(x = 0; x < 4; x++)
        printf("%s spielte %s im Alter von %i Jahren!\n", actor[x].actor, actor[x].character, actor[x].age);
    return (0);
}