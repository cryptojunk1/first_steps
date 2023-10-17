/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   argue1.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmessner <rmessner@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 13:51:44 by rmessner          #+#    #+#             */
/*   Updated: 2023/10/07 13:55:18 by rmessner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* argv und argc */
#include <stdio.h>

int main(int argc, char *argv[])
{
    if (argc > 1)
    {
        printf("FEHLER! Dieses Programm kann nichts mit Argumenten anfangen!\n");
        return (255);
    }
    else
    {
        printf("So ist´s brav!\n");
        return (0);
    }
}