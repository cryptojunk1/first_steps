/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   noneges.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmessner <rmessner@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 15:42:34 by rmessner          #+#    #+#             */
/*   Updated: 2023/10/07 15:44:16 by rmessner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int main()
{
    unsigned int a, b, c;

    a = 150;
    b = 300;
    c = a - b;

    printf("Unsigned C = %u\n", c);
    printf("Signed C = %i\n", c);

    return (0);
}