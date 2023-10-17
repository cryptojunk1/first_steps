/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sizeof.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmessner <rmessner@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 11:49:04 by rmessner          #+#    #+#             */
/*   Updated: 2023/10/10 11:57:40 by rmessner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    char c;
    int  i;
    long x;
    float f;
    double d;
    double temp[8];

    printf("Variablengroessen: ");
    printf("\nGroesse von Array = %i\n", sizeof(temp));
    printf("Groesse von char = %i\n", sizeof(c));
    printf("Groesse von int = %i\n", sizeof(i));
    printf("Groesse von long = %i\n", sizeof(x));
    printf("Groesse von float = %i\n", sizeof(f));
    printf("Groesse von double = %i\n", sizeof(d));

    return (0);
}