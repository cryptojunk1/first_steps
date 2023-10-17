/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cmdline3.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmessner <rmessner@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 10:13:14 by rmessner          #+#    #+#             */
/*   Updated: 2023/10/12 10:19:54 by rmessner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    char *temp;

    if(argc != 3)
    {
        puts("Zwei Argumente nach CMDLINE3 eingeben");
        exit(0);
    }

    /* Argumente vertauschen */

    temp = argv[1];
    argv[1] = argv[2];
    argv[2] = temp;

    /* Argumente ausgeben */

printf("argv[1] = %s\n", argv[1]);
printf("argv[2] = %s\n", argv[2]);

return (0);
}