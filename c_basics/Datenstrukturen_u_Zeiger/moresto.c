/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moresto.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmessner <rmessner@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 12:48:27 by rmessner          #+#    #+#             */
/*   Updated: 2023/10/12 12:49:23 by rmessner         ###   ########.fr       */
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
    } mystuff, hisstuff;

    /* Daten eines anderen */

    hisstuff.c = 'Y';
    hisstuff.n = 13;

    puts("Ihre Daten");
    printf("Geben Sie Ihren Lieblingsbuchstaben ein: ");
    mystuff.c = (char)getchar();
    while((getchar())!= '\n');

    putchar('\n');

    printf("Geben Sie Ihre Lieblingszahl ein: ");
    mystuff.n = atoi(fgets(input, maxeingabe, stdin));

    printf("Okay. Ihr Lieblingsbuchstabe lautet %c\n", mystuff.c);
    printf("und Ihre Lieblingszahl lautet \"%i\"\n", mystuff.n);
    printf("Sein Lieblingsbuchstabe lautet: %c\n", hisstuff.c);
    printf("und seine Lieblingszahl lautet: %i", hisstuff.n);

    return (0);
}