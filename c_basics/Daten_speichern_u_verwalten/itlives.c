/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   itlives.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmessner <rmessner@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 13:56:16 by rmessner          #+#    #+#             */
/*   Updated: 2023/10/15 20:24:36 by rmessner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *myfile;
    char c;

    myfile = fopen("alive.txt", "r");
    if(!myfile)
    {
        puts("Dateifehler!\n");
        exit(0);
    }
    do
    {
        c = (char)fgetc(myfile);
        putchar(c);
    } while (c != EOF);     //EOF = EndOfFile
    
    fclose(myfile);

    return (0);
}