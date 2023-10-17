/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stdb.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmessner <rmessner@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 15:18:24 by rmessner          #+#    #+#             */
/*   Updated: 2023/10/12 16:21:15 by rmessner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>
#include <string.h>

#define MAXNAME 30
#define MAXDESC 128

int main()
{
    struct st_info
    {
        int number;
        char name[MAXNAME];
        char description[MAXDESC];
    };
    struct st_info *episode = NULL;

    puts("Meine Star-Trek-Datenbank");

    episode = malloc(sizeof(struct st_info));
    if(!episode)
    {
        printf("Es wurde kein Speicher freigegeben!\n");
        exit(0);
    }
    /*Struktur fuellen ueber Zeiger */

    episode->number = 29;
    strcpy(episode->name, "Operation: Annihilate!");
    strcpy(episode->description, 
        "Wo die Jungs auf den Planeten gebeamt werden.");

    /*Daten ausgeben*/
    printf("Star-Trek-Episode %i\n", episode->number);
    printf("\"%s\"\n", episode->name);
    printf("Beschreibung: %s\n", episode->description);

    /*Speicher freigeben*/
    free(episode);
    episode = NULL;

    return (0);
}