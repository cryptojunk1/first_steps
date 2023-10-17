/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   typer1.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmessner <rmessner@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 12:27:12 by rmessner          #+#    #+#             */
/*   Updated: 2023/10/04 12:30:29 by rmessner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Endlosschleife mit Befehl auf Tastatur und break aufheben*/

#include <stdio.h>

int main()
{
    char    ch;

    printf("Programende: Druecken Sie die Taste ~ \n");

    for (;;)
    {
        ch = getchar();
        if (ch == '~')
        {
            break;
        }
    }
    printf("\nFertig!\n");
    return (0);
}