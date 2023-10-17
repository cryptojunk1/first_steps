/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   view.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmessner <rmessner@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 14:34:26 by rmessner          #+#    #+#             */
/*   Updated: 2023/10/13 14:39:09 by rmessner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

#define BUFFERLAENGE 80

int main(int argc, char *argv[])
{
    FILE *viewfile;
    char buffer[BUFFERLAENGE + 1]; //Zwischenspeicher

    if(argc < 2)
    {
        puts("Dateinahme fehlt");
        puts("Hier das Format:");
        puts("VIEW Dateiname");
        exit(1);
    }

    viewfile = fopen(argv[1], "r");
    if(!viewfile)
    {
        puts("Dateifehler");
        exit(1);
    }
    while(fgets(buffer, BUFFERLAENGE, viewfile))
        printf("%s", buffer);
    fclose(viewfile);
    return (0);
}