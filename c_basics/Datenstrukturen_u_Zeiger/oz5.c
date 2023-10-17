/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   oz5.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmessner <rmessner@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 13:12:16 by rmessner          #+#    #+#             */
/*   Updated: 2023/10/12 13:23:03 by rmessner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

#define MAXEINGABE 30

int main()
{
    struct oz
    {
        char actor[MAXEINGABE];
        char character[MAXEINGABE];
        int age;
    };

    struct oz actor[4];
    int x;

    strcpy(actor[0].actor, "Judy Garland");
    strcpy(actor[0].character, "Dorothy");
    actor[0].age = 17;

    strcpy(actor[1].actor, "Ray Bolger");
    strcpy(actor[1].character, "Scarecrow");
    actor[1].age = 25;

    strcpy(actor[2].actor, "Bert Lehr");
    strcpy(actor[2].character, "Cowardly Lion");
    actor[2].age = 44;

    strcpy(actor[3].actor, "Jack Harley");
    strcpy(actor[3].character, "Tin Woodsman");
    actor[3].age = 40;

    puts("Datenbank zum Zauberer von Oz!");

    for (x = 0; x < 4; x++)
    {
        printf("%s spielte %s im Alter von %i Jahren!\n", actor[x].actor, actor[x].character, actor[x].age);
    }

    return (0);
}