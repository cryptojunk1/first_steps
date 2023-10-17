/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ehd.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmessner <rmessner@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 16:55:49 by rmessner          #+#    #+#             */
/*   Updated: 2023/10/07 17:04:09 by rmessner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* EHD - Erase Harddisk */

#include <stdio.h>
#include <ctype.h>

#define FALSE 0
#define TRUE !FALSE

int yorn(void);

int main()
{
    /*bisschen was fuers Auge*/
    printf("EHD - Erase Hard Drive Utility\n");
    printf("Version 3.2 (C) BrainSoft Inc.\n\n");
    printf("ACHTUNG: Dieses Programm loescht moeglicherweise Ihre Festplatte!\n");
    printf("Weiter? (J/N): ");
    
    if (yorn())
    {
        printf("Mutig! Bisschen doof, aber mutig!\n");
    }
    else
        printf("Das war knapp!\n");
    return (0);
}

/* yorn() liefert TRUE bei Eingabe von J oder N */
int yorn(void)
{
    char c;
    int fertig;

    fertig = FALSE;
    while(!fertig)
    {
        c = (char)toupper(getchar());
        fertig = TRUE;
    fflush(stdin);
    }
    if (c == 'J')
        return (TRUE);
    return (FALSE);
}