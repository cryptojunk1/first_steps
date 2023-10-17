/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wise.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmessner <rmessner@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 15:05:38 by rmessner          #+#    #+#             */
/*   Updated: 2023/10/07 15:19:16 by rmessner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* wise.c - eine Programmreihe zum Testen der logischen Operatoren */

#include <stdio.h>
#include <ctype.h>

#define WISE 1          //Weise wenn Wahr
#define SILLY !(WISE)   //Verrueckt ist nicht wahr

int main()
{
    char c;
    int  pointdexter;
    int  Melvin;

    printf("Wer ist weise, Pointdexter oder Melvin?\n");
    printf("Geben Sie ein: P oder M: ");
    c = (char)toupper(getchar());
    if (c == 'P')
    {
        pointdexter = WISE;
        Melvin = SILLY;
    }
    else
    {
        pointdexter = SILLY;
        Melvin = WISE;
    }

    /* Diese Vergleiche zeigen die Ergebnisse an */
    if (pointdexter == WISE)
    {
        printf("Pointdexter ist weise!\n");
    }
    if (Melvin == SILLY)
    {
        printf("Melvin ist Verrueckt!\n");
    }
    if (pointdexter == SILLY)
        printf("Pointdexter ist Verrueckt!\n");
    if (Melvin == WISE)
    {
        printf("Melvin ist weise!\n");
    }
    return (0);
}

