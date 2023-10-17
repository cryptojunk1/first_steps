/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dwarf.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmessner <rmessner@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 09:51:15 by rmessner          #+#    #+#             */
/*   Updated: 2023/10/10 11:02:06 by rmessner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <ctype.h>

const int maxlaenge = 63;

int main()
{
    char dwarf[7][2][20] =
    {
        {"Chef", "?"},
        {"Happy", "?"},
        {"Hatschi", "?"},
        {"Brummbaer", "?"},
        {"Pimpi", "?"},
        {"Seppi", "?"},
        {"Schlafmuetz", "?"}
    };

    char input[maxlaenge + 1];
    int  named = 0;
    int  i;

    puts("Können Sie alle Zwergennamen erraten?");

    while(named < 7)
    {
        if(named == 1)
            printf("\nBisher haben Sie 1 Zwerg richtig erraten.\n");
        else
            printf("\nBisher haben Sie %i Zwerge richtig erraten.\n", named);

        printf("Bitte Namen eingeben: ");
        fgets(input, maxlaenge, stdin);
        
        if(input[strlen(input) - 1] == '\n')     //\n erstetzen durch 0x00(\0) am ende
            input[strlen(input) - 1] = 0x00;
        
        if(strcmp(input, "") == 0)      //abfrage ob keine eingabe
            break;
        for(i = 0; i < 7; i++)
        {
            if(dwarf[i][1][0] == '!')
                puts("Den hatten wir schon!");
            else
            {
                printf("Ja! %s ist Richtig!\n", dwarf[i]);
                named++;
                dwarf[i][1][0] = '!';
            }
        }
        if(named == 7)
        {
            puts("Sie haben ALLE!");
            puts("Schneewitchen wäre stolz auf Sie!");
            break;      //Spiel vorbei
        }
        else
        {
            puts("Versuchen Sie es erneut!");
        }
    }
    return (0);
}