/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   uline.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmessner <rmessner@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 18:19:25 by rmessner          #+#    #+#             */
/*   Updated: 2023/10/11 18:21:46 by rmessner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void    underline(char *string);

int main()
{
    char text[] = "Die Startlinie fuer 2023";

    puts(text);
    underline(text);

    return (0);
}

void underline(char *string)
{
    while (*string++)
    {
        putchar('=');
    }
    putchar ('\n');
}