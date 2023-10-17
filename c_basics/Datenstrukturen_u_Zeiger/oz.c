/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   oz.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmessner <rmessner@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 12:09:04 by rmessner          #+#    #+#             */
/*   Updated: 2023/10/12 12:12:21 by rmessner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int main()
{
    char *actor = "Judy Garland";
    char *character = "Dorothy";
    int  age = 17;

    puts("Datenbank zum Zauberer von Oz!");

    printf("%s spielte %s im Alter von %i\n", actor, character, age);

    return (0);
}