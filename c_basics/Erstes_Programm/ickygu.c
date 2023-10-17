/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ickygu.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmessner <rmessner@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 14:48:30 by rmessner          #+#    #+#             */
/*   Updated: 2023/10/03 14:53:33 by rmessner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int main()
{
    char menue[] = "Glibrige helle Masse \"Icky Woka Gu\"";
    int teller;
    float   preis;

    teller = 2;
    preis = teller * 8.30;

    printf("Heute Sonderangebot - %s\n", menue);
    printf("Sie hatten %i Teller.\n", teller);
    printf("Das macht dann %.2f EUR bitte.\n", preis);

    return (0);
}