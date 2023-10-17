/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   intro.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmessner <rmessner@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 10:30:37 by rmessner          #+#    #+#             */
/*   Updated: 2023/10/09 10:37:05 by rmessner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

const int maxlaenge = 55;

int main()
{
    char name[maxlaenge +1];
    char first[maxlaenge +1];
    char space[] = " ";
    int  pos;

    printf("Ihr Vor- und Nachname? ");
    fgets(name, maxlaenge, stdin);
    
    if(name[strlen(name) - 1] == '\n')
        name[strlen(name) - 1] = '\0';

    pos = strcspn(name, space);
    strncpy(first, name, pos);
    first[pos] = '\0';
    
    printf("Hallo %s, nett Sie kennen zu lernen.\n", name);
    printf("Oder darf ich %s sagen?\n", first);
    return (0);
}