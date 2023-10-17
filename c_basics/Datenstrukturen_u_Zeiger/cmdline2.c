/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cmdline2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmessner <rmessner@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 10:08:50 by rmessner          #+#    #+#             */
/*   Updated: 2023/10/12 10:10:58 by rmessner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int main(int argc, char *argv[])
{
    int i;

    puts("Kommandozeilenargumente: ");

    for(i = 0; i < argc; i++)
    {
        while(*argv[i])
        {
            putchar(*argv[i]);
            argv[i]++;
        }
        putchar('\n');
    }
    return (0);
}