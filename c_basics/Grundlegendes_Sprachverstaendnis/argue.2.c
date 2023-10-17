/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   argue.2.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmessner <rmessner@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 13:59:53 by rmessner          #+#    #+#             */
/*   Updated: 2023/10/07 14:02:56 by rmessner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int main(int argc, char *argv[])
{
    int x;

    printf("argc = %i\n", argc);

    for (x = 0; x < argc; x++)
    {
        printf("argv[%i] = %s\n", x, argv[x]);
    }
    return (0);
}