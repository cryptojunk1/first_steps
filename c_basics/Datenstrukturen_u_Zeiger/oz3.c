/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   oz3.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmessner <rmessner@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 12:18:48 by rmessner          #+#    #+#             */
/*   Updated: 2023/10/12 12:24:22 by rmessner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int main()
{
    char *actor[] = {"Judy Garland", "Ray Bolger", "Bert Lehr",
                    "Jack Harley"};
    char *character[] = {"Dorothy", "Scarecrow", "Cowardly Lion", "Tin Woodsman"};
    int age[] = {17, 35, 44, 40};
    int i;

    puts("Datenbank zum Zauberer von Oz!");

    for (i = 0; i < 4; i++)
    {
        printf("%s spielte %s im Alter von %i Jahren!\n", actor[i], character[i], age[i]);
    }
    return (0);
}