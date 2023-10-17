/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sushi.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmessner <rmessner@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 07:36:01 by rmessner          #+#    #+#             */
/*   Updated: 2023/10/09 07:47:49 by rmessner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_strlen(char *str)
{
    int i;

    i = 0;
    while(str[i] != 0x00)   //Nullbyte ist hier 0x00
    {
        i++;
    }
    return (i);
}

int    main()
{
    char    phrase[] = "Sushi ist Suppi";
    int     i;
    int     size;

    printf("\"%s\"\n", phrase);

    size = ft_strlen(phrase);
    printf("Dieser Satz hat %i Zeichen.\n", size);

    for(i = 0; i < size; i++)
    {
        printf("phrase[%i] = %c \n", i, phrase[i]);
    }

    printf("Geben Sie ein Zeichen ein und druecken Sie Eingabe: \n");
    phrase[9] = (char)getchar();
    printf("\n%s\n", phrase);
    return (0);
}