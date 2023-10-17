/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   scram.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmessner <rmessner@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 09:47:30 by rmessner          #+#    #+#             */
/*   Updated: 2023/10/09 10:05:55 by rmessner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>
#include <string.h>

const int maxsize = 128;

void    rot13(char *str);

int main()
{
    char string[maxsize];
    char scrambled[maxsize];

    puts("Geben Sie einen Satz ein: ");
    fgets(string, maxsize, stdin);

    /* vor der verschlüsselung eine Kopie anlegen */

    strncpy(scrambled, string, strlen(string) + 1);

    rot13(scrambled);
    printf("\nVerschlüsselter Text ist: %s\n", scrambled);

    return (0);
}

void    rot13(char *str)
{
    int count = 0;
    char c = '\x20';

    while(c)
    {
        c = str[count];
        if (isalpha(c))
        {
            if(toupper(c) >= 'A' && toupper(c) <= 'M')
            {
                c += 13;
            }
            else
                c -= 13;
        }
        str[count] = c;
        count++;
    }
}