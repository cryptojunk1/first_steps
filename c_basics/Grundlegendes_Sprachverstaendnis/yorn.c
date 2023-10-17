/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   yorn.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmessner <rmessner@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 16:40:05 by rmessner          #+#    #+#             */
/*   Updated: 2023/10/07 16:47:45 by rmessner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* YORN - Abfrage eine JA/NEIN-Antwort */

#include <stdio.h>
#include <ctype.h>

#define TRUE 1

int main()
{
    char c;

    printf("Ihre Antwort bitte: ");

    while (TRUE) //Endlosschleife!!
    {
        printf("\nJ fuer Ja oder N fuer Nein: ");
        c = (char)toupper(getchar());
        if(c == 'J' || c == 'N')
            break;
        fflush(stdin);
    }
    printf("%c\n", c);
    return (0);
}