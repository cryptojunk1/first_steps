/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   taxes.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmessner <rmessner@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 10:53:30 by rmessner          #+#    #+#             */
/*   Updated: 2023/10/04 11:13:13 by rmessner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

#define EINGABELAENGE 5

int main()
{
    int     steuer1;
    int     steuer2;
    char    groesse[EINGABELAENGE];
    char    temp[EINGABELAENGE];
    char    zahl[EINGABELAENGE];

    printf("Ihre Körpergröße: ");   // Abfrage Körpergröße
    fgets(groesse, EINGABELAENGE, stdin);

    printf("Jetzt Außentemperatur in Grad Celsius: ");  // Abfrage Außentemperatur
    fgets(temp, EINGABELAENGE, stdin);
    
    printf("Ihre Lieblingszahl: ");     // Abfrage Lieblingszahl
    fgets(zahl, EINGABELAENGE, stdin);

    steuer1 = atoi(groesse) * atoi(zahl);
    steuer2 = 10 * atoi(temp) * atoi(zahl);

    if (steuer1 > steuer2)
    {
        printf("Sie müssen %i EUR Steuern bezahlen!\n", steuer1);
    }
    else if (steuer1 == steuer2)
    {
        printf("Sie müssen leider %i bezahlen!! HAHAHHA\n", steuer1 + steuer2);
    }
    else
        printf("Sie müssen %i EUR Steuern zahlen!\n", steuer2);
    return (0);
}