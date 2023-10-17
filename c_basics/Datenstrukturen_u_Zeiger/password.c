/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   password.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmessner <rmessner@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 10:41:23 by rmessner          #+#    #+#             */
/*   Updated: 2023/10/09 10:47:54 by rmessner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

/* max Passwordlaenge */
const int maxlaenge = 15;

int main()
{
    char string[maxlaenge + 1];
    char password[] = "Bitte";
    int result;

    printf("Geben Sie das geheime Password ein: ");
    fgets(string, maxlaenge, stdin);

    if(string[strlen(string) - 1] == '\n')
    {
        string[strlen(string) - 1] = '\0';
    }
    result = strcmp(string, password);

    if (result == 0)
    {
        printf("Herzlich Willkommen Master Chief\n");
    }
    else
    {
        printf("Tut uns leid, falscher Zugangscode!\n");
        printf("Die Sicherheitsbehoerden wurden informiert!\n");
        printf("Wir finden Sie - Widerstand ist absolut zwecklos ...\n");
    }
    return (0);
}