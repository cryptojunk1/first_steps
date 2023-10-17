/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   which.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmessner <rmessner@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 09:00:38 by rmessner          #+#    #+#             */
/*   Updated: 2023/10/04 09:04:24 by rmessner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int main()
{
    char    key;

    printf("Druecken Sie eine Taste! ");
    key = getchar();
    printf("\nSie haben die Taste %c gedrückt!\n", key);
    printf("Hier die ASCII Value deines Buchstaben: '%i'\n", key);
    return (0);
}