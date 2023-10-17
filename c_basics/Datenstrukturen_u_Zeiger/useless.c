/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   useless.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmessner <rmessner@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 12:37:25 by rmessner          #+#    #+#             */
/*   Updated: 2023/10/11 12:12:01 by rmessner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int main()
{
    int i, v, x;
    int *adress;

    i = 1;
    v = 5;
    x = 10;

    adress = &i;
    printf("Variable i = %i\n", *adress);

    adress = &v;
    printf("Variable v = %i\n", *adress);

    adress = &x;
    printf("Variable x = %i\n", *adress);

    return (0);
}