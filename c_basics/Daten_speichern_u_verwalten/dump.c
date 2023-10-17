/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dump.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmessner <rmessner@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 14:51:43 by rmessner          #+#    #+#             */
/*   Updated: 2023/10/13 14:57:53 by rmessner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    FILE *dump_me;
    int i;
    int x = 0;

    if (argc < 2)
    {
        puts("Format: DUMP filename");
        exit(0);
    }
    dump_me = fopen(argv[1], "rb");
    if(dump_me == NULL)
    {
        printf("Dateifehler %s\n", argv[1]);
        exit(1);
    }

    while((i = fgetc(dump_me)) != EOF)
    {
        printf("%02X ", i);
        x++;
        if(!(x % 16))
            putchar('\n');
    }
    fclose(dump_me);
    printf("\n%s: size = %u bytes\n", argv[1], x);
    return (0);
}