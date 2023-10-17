/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bond3.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmessner <rmessner@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 18:34:54 by rmessner          #+#    #+#             */
/*   Updated: 2023/10/15 18:45:53 by rmessner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

    struct jb *first_item;
    struct jb *current_item;
    struct jb *new_item;
    unsigned index = 0;

    /* Zuerst die erste Struktur */
    first_item = malloc(sizeof(struct jb));
    current_item = first_item;

    /* Die Strukturen befuellen */
    while(1)
    {
        strcpy(current_item->actor, bonds[index]);
        index++;
        if(index < RECORDS)
        {
            new_item = malloc(sizeof(struct jb));
            current_item->next = new_item;
            current_item = new_item;
        }
        else
        {
            current_item->next = NULL;
            break;
        }
    }
    /* und anzeigen */
    current_item = first_item;
    index = 1;
    while (current_item)
    {
        printf("Struktur %d: ", index++);
        printf("%s\n", current_item->actor);
        current_item = current_item->next;
    }
    return (0);
}
