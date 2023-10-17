/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   grid.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmessner <rmessner@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 12:09:10 by rmessner          #+#    #+#             */
/*   Updated: 2023/10/08 12:11:39 by rmessner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int main()
{
    int     a;
    char    b;

    printf("Hier kommt das Gitternetz...\n");

    for (a = 1; a < 10; a++)
    {
        for(b = 'A'; b < 'K'; b++)
        {
            printf("%i-%c ", a, b);
        }
        putchar('\n');
    }
    return (0);
}