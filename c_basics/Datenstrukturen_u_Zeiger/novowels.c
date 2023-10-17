/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   novowels.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmessner <rmessner@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 18:24:26 by rmessner          #+#    #+#             */
/*   Updated: 2023/10/11 18:34:08 by rmessner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>

void    novowels(char *string);

int main()
{
    char phrase[] = "Weg mit den Vokalen in Fredonia!";

    puts("Vor der Saeuberung:\n");
    puts(phrase);

    novowels(phrase);

    printf("\nNach der Saeuberung:\n");
    puts(phrase);

    return (0);
}

void    novowels(char *string)
{
    while(*string++)
    {
        switch (toupper(*string))
        {
            case 'A':
                *string = '&';
                break;
            case 'E':
                *string = '@';
                break;
            case 'I':
                *string = '#';
                break;
            case 'O':
                *string = '$';
                break;
            case 'U':
                *string = '%';
                break;
            default:
                break;
        }
    }
}