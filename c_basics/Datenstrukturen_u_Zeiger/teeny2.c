/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   teeny2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmessner <rmessner@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 12:04:14 by rmessner          #+#    #+#             */
/*   Updated: 2023/10/11 19:01:54 by rmessner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int main()
{
    int teeny;
    int *t;

    teeny = 1;
    t = &teeny;

    printf("Variable teeny = %i\n", teeny);
    printf("Adresse von teeny = %p\n", t);
    printf("Inhalt von t = %i\n", *t);

    teeny = 42;

    printf("\nVariable teeny = %i\n", teeny);
    printf("Adresse von teeny = %p\n", t);
    printf("Wert von t nach aendern von teeny = %i\n", *t);

    *t = 64;

    printf("\nVariable teeny = %i\n", teeny);
    printf("Adresse von teeny = %p\n", t);
    printf("Wert von t nach aendern von *t = %i\n", *t);
    return (0);
}