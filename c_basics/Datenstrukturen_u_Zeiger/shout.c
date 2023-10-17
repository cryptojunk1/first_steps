/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   shout.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmessner <rmessner@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 09:09:08 by rmessner          #+#    #+#             */
/*   Updated: 2023/10/09 09:22:58 by rmessner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char    ft_toupper(char str)
{
        if (str >= 'a' && str <= 'z')
            str -= 32;
        return (str);
}

int main()
{
    char string[] = "Schreien Sie nicht gleich los!";
    char c = '\x20';        //damit kein /0 aus zufall in der variable steht
    int x;

    x = 0;
    puts(string);

    while(c)
    {
        c = ft_toupper(string[x]);
        string[x] = c;
        x++;
    }
    puts(string);
    return (0);
}