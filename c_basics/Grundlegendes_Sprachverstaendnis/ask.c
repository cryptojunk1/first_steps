/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ask.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmessner <rmessner@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 13:32:06 by rmessner          #+#    #+#             */
/*   Updated: 2023/10/08 13:47:48 by rmessner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

#define TRUE 1

int main(int argc, char *argv[])
{
    int x;
    char   c;

    if (argc < 2)   //keine Argumente erfolgt
    {
        printf("Verwendung von Ask:\n");
        printf("ask [TEXT]\n");
        printf("\"Text\" wird angezeigt\n");
        printf("ask erwartet dann die Eingabe");
        printf(" von J oder N\n");
        printf("J liefert ein ERRORLEVEL 1;");
        printf(" N liefert 2.\n");
        exit(0);
    }
    /* Alle Argumente ausgeben */
    for (x = 1; x < argc; x++)
    {
        printf("%s\x20", argv[x]);
    }
    printf("(J oder N)? ");

    while(TRUE)
    {
        c = (char)getchar();
        if (c == 'j' || c == 'J')
            exit(1);
        if (c == 'n' || c == 'N')
            exit(2);
    }
    return (0);
}
