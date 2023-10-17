/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bond.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmessner <rmessner@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 17:59:20 by rmessner          #+#    #+#             */
/*   Updated: 2023/10/15 18:05:44 by rmessner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* start von verkettete listen */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    struct jb
    {
        char actor[25];
        struct jb *next;
    };
    struct jb *bond;

    /*Zuerst die erste Struktur der Liste */
    bond = malloc(sizeof(struct jb));

    /* Und fuellen der Struktur */
    strcpy(bond->actor, "Sean Connery");
    bond->next = NULL;      //Listenende

    /* Die Ergebnisse anzeigen */
    printf("Die erste Struktur wurde erzeugt!\n");
    printf("\tbond->actor = %s\n", bond->actor);
    printf("\tAdresse der folgenden Struktur = %p\n", bond->next);

    return(0);
}