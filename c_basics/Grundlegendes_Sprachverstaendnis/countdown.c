/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   countdown.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmessner <rmessner@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 16:15:55 by rmessner          #+#    #+#             */
/*   Updated: 2023/10/07 16:37:57 by rmessner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Ein wichtiges Programm für die NASA */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int     start;
    time_t  time1;
    time_t  time2;

    const int   inplen = 10;
    char    input[inplen];
    /* Mit der Schleife fehleingaben verhindern!*/
    do
    {    
        printf("Bitte geben Sie einen Startwert fuer den Countdown ein!\n");
        printf("Von 1 bis 100\n");
        start = atoi(fgets(input,inplen,stdin));
    }
    while (start < 1 || start > 100);

    /* Countdown Schleife */
    do
    {
        printf("T-Minus %i\n", start);
        start--;
        /* Delay auf 1 Sekunde festlegen mithilfe von time.h */
        time(&time1);
        do
        {
            time(&time2);
        } while ((time2 - time1) < 1);
        
    } 
    while (start > 0);
        printf("NULL\tTriebwerke starten!\n");
    return (0);
}