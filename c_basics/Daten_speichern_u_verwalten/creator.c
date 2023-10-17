/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   creator.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmessner <rmessner@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 14:10:45 by rmessner          #+#    #+#             */
/*   Updated: 2023/10/13 14:18:34 by rmessner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
    FILE *myfile;
    char c;

    myfile = fopen("alive.txt", "r");
    
    if(myfile)      // Fragen ob überschrieben werden soll
    {
        puts("ALIVE.TXT existiert schon!");
        printf("Ueberschreiben? [J/N] ");
        c = (char)toupper(getchar());
        if(c != 'J')
        {
            puts("Okay. Goodbye.");
            fclose(myfile);
            exit(0);
        }
    }
    myfile = fopen("alive.txt", "w");   // In Datei schreiben
    if(myfile == NULL)
    {
        puts("Dateifehler!");
        exit(0);
    }
    fprintf(myfile, "Neue Datei erzeugt\n");
    fclose(myfile);
    return(0);
}