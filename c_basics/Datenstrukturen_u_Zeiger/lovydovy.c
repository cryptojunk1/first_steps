/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lovydovy.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmessner <rmessner@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 12:36:26 by rmessner          #+#    #+#             */
/*   Updated: 2023/10/11 13:01:15 by rmessner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int main()
{
    int array[8];
    int *a, x;

    /* Zeiger initialisieren */
    a = array;

    for (x = 0; x < 8; x++)
    {
        *(a + x) = x * 100;
        printf("array[%i] = %i\t%i\n", x, array[x], *a + x);
    }
    return (0);
}