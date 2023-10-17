/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bond1.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmessner <rmessner@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 18:13:57 by rmessner          #+#    #+#             */
/*   Updated: 2023/10/15 18:22:20 by rmessner         ###   ########.fr       */
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

    /*Zuerst die erste Struktur der Liste */
    first_item = malloc(sizeof(struct jb));
    
    /* Befüllen der Struktur */
    strcpy(first_item->actor, "Sean Connery");
    new_item = malloc(sizeof(struct jb));
    first_item->next = new_item;

    /*Fuellen der zweiten Struktur */
    current_item = new_item;
    strcpy(current_item->actor, "David Niven");
    current_item->next = NULL;   //Listenende

    /* Die Ergebnisse anzeigen */
    printf("Die erste Struktur:\n");
    printf("\tfirst_item->actor = %s\n", first_item->actor);
    printf("\tNaechste Struktur = %p\n", first_item->next);

    printf("Die zweite Struktur:\n");
    printf("\tcurrent_item->actor = %s\n", current_item->actor);
    printf("\tNaechste Struktur = %p\n", current_item->next);

    return(0);
}