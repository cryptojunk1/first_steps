/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   oz7.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmessner <rmessner@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 14:03:00 by rmessner          #+#    #+#             */
/*   Updated: 2023/10/12 14:07:20 by rmessner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

#define MAXNAME 30

struct oz
{
    char actor[MAXNAME];
    char character[MAXNAME];
    int age;
};

void print_oz(struct oz info);

int main()
{
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
        print_oz(actor[x]);
    return (0);
}

void print_oz(struct oz info)
{
    printf("%s spielte %s im Alter von %i Jahren!\n", info.actor, info.character, info.age);
}