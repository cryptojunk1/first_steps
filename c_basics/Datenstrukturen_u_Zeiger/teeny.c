/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   teeny.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmessner <rmessner@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 12:00:12 by rmessner          #+#    #+#             */
/*   Updated: 2023/10/11 12:03:42 by rmessner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int main()
{
    int teeny;
    int *t;

    /* Variablen initialisieren */

    teeny = 1;
    t = &teeny;

    /* Benutzung der Variablen */

    printf("Variable teeny = %i\n", teeny);
    printf("Adresse von teeny = %p\n", t);
    printf("Inhalt von t = %i\n", *t);
    return (0);
}