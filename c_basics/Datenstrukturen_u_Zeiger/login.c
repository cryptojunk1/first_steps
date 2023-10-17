/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   login.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmessner <rmessner@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 12:50:18 by rmessner          #+#    #+#             */
/*   Updated: 2023/10/12 13:00:42 by rmessner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAXEINGABE 15

char *entferneNL(char *string)
{
    char *string2 = string;
    while(*string2)
    {
        if(*string2 == '\n')
            *string2 = '\0';
        string2++;
    }
    return (string);
}

int main()
{
    char input[MAXEINGABE];

    struct login
    {
        char id[MAXEINGABE];
        char password[MAXEINGABE];
    };

    struct login user1 = {"Eisenhower", "Ike"};

    puts("Weisses Haus Zentralcomputer");
    printf("Login Mr. President: ");
    fgets(input, MAXEINGABE, stdin);
    if(strcmp(entferneNL(input), user1.id) != 0)
    {
        puts("Login inkorrekt!");
        exit(0);
    }

    printf("Password: ");
    fgets(input, MAXEINGABE, stdin);

    if(strcmp(entferneNL(input), user1.password) != 0)
    {
        puts("Falsches Password!");
        exit(0);
    }

    puts("Guten Tag, Mr. President!");
    return (0);
}