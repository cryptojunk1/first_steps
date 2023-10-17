/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bond2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmessner <rmessner@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 18:23:24 by rmessner          #+#    #+#             */
/*   Updated: 2023/10/15 18:31:52 by rmessner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main()
{
    struct jb
    {
        char actor[30];
        struct jb *next;
    };
    struct jb *first_item;
    struct jb *current_item;
    struct jb *new_item;

    char *bonds[] =
    {
        "Sean Connery",
        "David Niven",
        "George Lazenby",
        "Roger Moore",
        "Timothy Dalton",
        "Pierce Brosnan",
        "Daniel Craig"
    };

    #define RECORDS (sizeof(bonds)/sizeof(char*))    

    unsigned index = 0;

    /* Zuerst die erste Struktur der Liste */
    first_item = malloc(sizeof(struct jb));
    current_item = first_item;

    /* Die Strukturen fuellen */
    while(index < RECORDS)
    {
        strcpy(current_item->actor, bonds[index]);
        new_item = malloc(sizeof(struct jb));
        current_item->next = new_item;

        current_item = new_item;
        index++;
    }

    /* und anzeigen */
}