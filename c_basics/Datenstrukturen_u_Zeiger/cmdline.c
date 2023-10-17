/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cmdline.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmessner <rmessner@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 10:02:49 by rmessner          #+#    #+#             */
/*   Updated: 2023/10/12 10:04:27 by rmessner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void    main(int argc, char *argv[])
{
    int i;

    puts("Kommandozeilenargumente:");

    for(i = 0; i < argc; i++)
    {
        puts(argv[i]);
    }
}