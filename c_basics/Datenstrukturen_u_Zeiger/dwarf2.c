/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dwarf2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmessner <rmessner@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 11:03:12 by rmessner          #+#    #+#             */
/*   Updated: 2023/10/10 11:17:34 by rmessner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <ctype.h>

const int maxlaenge = 64;

int main()
{
    char dwarfs[7][2][20] = 
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

    puts("Können Sie alle 7 Zwerge am Namen erraten?");

    while(named < 7)
    {
        if (named == 1)
            printf("Sie haben bereits 1 Zwerg richtig erkannt!\n");
        else
            printf("Sie haben bereits %i Zwerge richtig erkannt!\n", named);
        
        printf("Namen eingeben: ");
        fgets(input, maxlaenge, stdin);
        if(input[strlen(input) - 1] == '\n')
            input[strlen(input) - 1] = '\0';
        
        if(strcmp(input, "") == 0)
            break;
        
        for(i = 0; i < 7; i++)
        {
            if(strcmp(input, dwarfs[i][0]) == 0)
            {
                if(dwarfs[i][1][0] == '!')
                {
                    puts("Diesen Namen hatten wir schon!");
                }
                else
                {
                    printf("Ja, %s ist ein richtiger Name.\n", input);
                    named++;
                    dwarfs[i][1][0] = '!';
                }
            }
        }
        if (named == 7)
        {
            puts("Hurra!! Sie haben alle!");
            puts("Schneewitchen wäre stolz auf Sie!");
            break;
        }
        else
            puts("Versuchen Sie es noch einmal!");
    }
    return (0);
}