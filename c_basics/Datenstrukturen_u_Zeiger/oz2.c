/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   oz2.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmessner <rmessner@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 12:13:04 by rmessner          #+#    #+#             */
/*   Updated: 2023/10/12 12:17:27 by rmessner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int main()
{
    char *actor1 = "Judy Garland";
    char *character1 = "Dorothy";
    int  age1 = 17;

    char *actor2 = "Ray Bolger";
    char *character2 = "Scarecrow";
    int  age2 = 35;

    char *actor3 = "Bert Lahr";
    char *character3 = "Cowardly Lion";
    int  age3 = 44;

    char *actor4 = "Jack Haley";
    char *character4 = "Tin Woodsman";
    int  age4 = 40;

    puts("Datenbank zum Zauberer von Oz!");

    printf("%s spielte als %s im Alter von %i Jahren.\n", actor1, character1, age1);
    printf("%s spielte als %s im Alter von %i Jahren.\n", actor2, character2, age2);
    printf("%s spielte als %s im Alter von %i Jahren.\n", actor3, character3, age3);
    printf("%s spielte als %s im Alter von %i Jahren.\n", actor4, character4, age4);

    return (0);
}