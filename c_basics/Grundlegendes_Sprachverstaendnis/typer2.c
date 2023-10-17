/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   typer2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmessner <rmessner@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 16:09:37 by rmessner          #+#    #+#             */
/*   Updated: 2023/10/07 16:11:30 by rmessner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int main()
{
    char    ch;

    printf("Programende: Druecken Sie die Taste ~ \n");

    while (ch != '~')
    {
        ch = getchar();
    }
    printf("\nFertig!\n");
    return (0);
}