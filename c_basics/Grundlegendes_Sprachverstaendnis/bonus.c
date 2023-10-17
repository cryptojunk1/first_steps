/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bonus.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmessner <rmessner@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 13:42:07 by rmessner          #+#    #+#             */
/*   Updated: 2023/10/05 13:49:30 by rmessner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

#define EINGABELAENGE 20

float   bonus(char x);

int main()
{
    char    name[EINGABELAENGE];
    char    level;
    float   b;

    printf("Name des Angestellten: ");
    fgets(name, EINGABELAENGE, stdin);
    printf("Bonus Stufe (0, 1 oder 2): ");
    level = (char)getchar();
    b = bonus(level);
    b *= 100;
    printf("Der Bonus fuer %s betraegt EUR %.2f.\n", name, b);
    return (0);
}

float   bonus(char x)
{
    if(x == '0')
        return (0.33f);
    if(x == '1')
        return (1.5f);
    return (3.10f);
}