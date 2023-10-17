/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   scramble.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmessner <rmessner@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 09:25:29 by rmessner          #+#    #+#             */
/*   Updated: 2023/10/09 09:44:06 by rmessner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void    rot13(char *str);

int main()
{
    char string[] = "Ein Schwein faellt in den Matsch. Patsch!";

    printf("Dieser Satz wird nun gerottet.. :-)\n");
    puts(string);

    printf("Druecken Sie Eingabe um Verschlüsselung zu starten: ");
    getchar();
    printf("\n");
    rot13(string);
    printf("Hier Ihr verschlüsselter Satz:\n");
    puts(string);

    printf("Druecken Sie Eingabe um Entschlüsselung zu starten: ");
    getchar();
    printf("\n");

    printf("Und nun zurück:\n");
    rot13(string);
    puts(string);
    return (0);
}

void    rot13(char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0')
    {
        if((str[i] >= 'A' && str[i] <= 'M') || (str[i] >= 'a' && str[i] <= 'm'))
            str[i] += 13;
        else if ((str[i] >= 'N' && str[i] <= 'Z') || (str[i] >= 'n' && str[i] <= 'z'))
            str[i] -= 13;
        i++;
    }
    return;
}