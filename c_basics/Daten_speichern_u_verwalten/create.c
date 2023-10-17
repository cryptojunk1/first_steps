/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmessner <rmessner@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 12:30:30 by rmessner          #+#    #+#             */
/*   Updated: 2023/10/13 12:32:46 by rmessner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *myfile;

    myfile = fopen("alive.txt", "w");
    if(!myfile)
    {
        puts("Dateifehler\n");
        exit(0);
    }
    
    fprintf(myfile, "Eine neue Datei! Es klappt!");
    fclose(myfile);

    return (0);
}