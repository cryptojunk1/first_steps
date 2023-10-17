/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   yorn2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmessner <rmessner@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 16:49:07 by rmessner          #+#    #+#             */
/*   Updated: 2023/10/07 16:53:09 by rmessner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>

#define FALSE 0
#define TRUE !FALSE

int main()
{
    char c;
    int fertig;

    printf("Ihre Antwort bitte: ");
    fertig = FALSE; // noch nicht fertig

    while (!fertig)
    {
        printf("\n'J' fuer Ja oder 'N' fuer Nein!\n");
        c = (char)toupper(getchar());
        if (c == 'J' || c == 'N')
            fertig = TRUE;
        fflush(stdin);
    }
    printf("%c\n", c);
    return (0);
}