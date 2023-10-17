/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   infosto.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmessner <rmessner@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 12:26:02 by rmessner          #+#    #+#             */
/*   Updated: 2023/10/12 12:31:37 by rmessner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

const int maxeingabe = 10;

int main()
{
    char input[maxeingabe];

    struct stuff
    {
        char c;
        int  n;
    };

    struct stuff mystuff;

    puts("Ihre Daten");

    printf("Geben Sie Ihren Lieblingsbuchstaben ein: ");
    mystuff.c = getchar();
    while((getchar())!= '\n');

    printf("Geben Sie Ihre Lieblingzahl ein: ");
    mystuff.n = atoi(fgets(input, maxeingabe, stdin));

    printf("Okay. Ihr Lieblingsbuchstabe lautet \"%c\" ", mystuff.c);
    printf("und Ihre Lieblingszahl lautet %i\n", mystuff.n);
}