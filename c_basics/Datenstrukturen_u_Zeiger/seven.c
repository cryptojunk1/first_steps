/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   seven.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmessner <rmessner@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 09:53:20 by rmessner          #+#    #+#             */
/*   Updated: 2023/10/12 10:00:36 by rmessner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int main()
{
    char dwarf[7][12] =
    {
        "Chef",
        "Happy",
        "Brummbaer",
        "Pimpi",
        "Seppi",
        "Schlafmuetz"
    };

    char *seven[] =
    {
        "Chef",
        "Happy",
        "Brummbaer",
        "Pimpi",
        "Seppi",
        "Schlafmuetz"
    };

    int i;

    for (i = 0; i < 7; i++)
    {
        printf("%s\n", dwarf[i]);
    }
    putchar('\n');

    for (i = 0; i < 7; i++)
    {
        printf("%s\n", seven[i]);
    }
    return (0);
}