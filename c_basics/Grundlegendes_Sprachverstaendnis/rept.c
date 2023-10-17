/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rept.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmessner <rmessner@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 14:06:42 by rmessner          #+#    #+#             */
/*   Updated: 2023/10/07 14:14:56 by rmessner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int     x;
    int     r;
    char    c;

    if(argc != 3)
    {
        printf("Dieses Programm braucht 3 Parameter:\n");
        printf("rept c r\n");
        printf("c ist das Zeichen\n");
        printf("r ist die Anzahl der Wiederholungen\n");
        exit (0); //Programm beenden
    }
    /* Es wurden 2 Argumente angegeben 
    *  argv[1] enthält das Zeichen
    *  argv[2] enthält die Anzahl der Wiederholungen
    */
    c = argv[1][0];
    r = atoi(argv[2]);

    for (x = 0; x < r; x++)
    {
        putchar(c);
    }
    return (0);
}