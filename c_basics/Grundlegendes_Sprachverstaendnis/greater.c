/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   greater.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmessner <rmessner@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 11:24:18 by rmessner          #+#    #+#             */
/*   Updated: 2023/10/04 11:35:13 by rmessner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Welches Zeichen ist größer?*/

#include <stdio.h>
#include <stdlib.h>


int main()
{
    char    zeichen1;
    char    zeichen2;

    printf("Geben Sie den erste Zeichen ein: ");
    zeichen1 = getchar();
    getchar();
    printf("Geben Sie das zweite Zeichen ein: ");
    zeichen2 = getchar();

    if (zeichen1 < zeichen2)
        printf("%c ist groesser als '%c'\n", zeichen2, zeichen1);
    else if (zeichen1 == zeichen2)
        printf("Beide Zeichen sind gleich!\n");
    else
        printf("'%c' ist groesser als '%c'\n", zeichen1, zeichen2);
    return (0);
}