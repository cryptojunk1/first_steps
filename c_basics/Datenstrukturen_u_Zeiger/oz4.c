/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   oz4.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmessner <rmessner@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 13:03:29 by rmessner          #+#    #+#             */
/*   Updated: 2023/10/12 13:06:55 by rmessner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

#define MAXEINGABE 30

int main()
{
    struct Oz
    {
        char actor[MAXEINGABE];
        char character[MAXEINGABE];
        int age;
    } actor;

    strcpy(actor.actor, "Judy Garland");
    strcpy(actor.character, "Dorothy");
    actor.age = 17;

    puts("Datenbank zum Zauberer von Oz!");

    printf("%s spielte %s im Alter von %i Jahren\n", actor.actor, actor.character, actor.age);

    return (0);
}