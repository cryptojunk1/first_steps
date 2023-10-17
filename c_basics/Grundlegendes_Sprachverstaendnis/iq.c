/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iq.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmessner <rmessner@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 13:23:55 by rmessner          #+#    #+#             */
/*   Updated: 2023/10/05 14:00:58 by rmessner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

#define EINGABELAENGE 20

int getval(void);

int main()
{
    int     alter;
    int     gewicht;
    int     plz;
    float   iq;

    printf("Programm zur ermittlung des IQ\n");
    printf("Ihr Alter: ");
    alter = getval();

    printf("Ihr Gewicht: ");
    gewicht = getval();

    printf("Ihre PLZ: ");
    plz = getval();

    iq = (float)(alter + gewicht) / plz;
    iq *= 1000;
    
    printf("Sie haben einen IQ von %.2f Punkten.\n", iq);

    return (0);
}

int getval(void)
{
    char    input[EINGABELAENGE];

    return (atoi(fgets(input, EINGABELAENGE, stdin)));
}