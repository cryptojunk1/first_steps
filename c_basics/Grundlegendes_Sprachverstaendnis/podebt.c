/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   podebt.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmessner <rmessner@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 15:55:55 by rmessner          #+#    #+#             */
/*   Updated: 2023/10/05 16:01:54 by rmessner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

#define EINGABELAENGE 20

int main()
{
    char    name[21];
    int     num;
    float   flnum;

    char eingabe[EINGABELAENGE];

    printf("Geben Sie eine Zahl(1), eine Fliesskommazahl(2) und Ihren Namen(3) ein:\n");
    puts("1: ");
    fgets(eingabe, EINGABELAENGE, stdin);
    num = atoi(eingabe);

    puts("2: ");
    fgets(eingabe, EINGABELAENGE, stdin);
    flnum = atof(eingabe);

    puts("3: ");
    fgets(eingabe, EINGABELAENGE, stdin);

    printf("%s gab ein: %04i und %5.3f.\n", name, num, flnum);
    return (0);
}