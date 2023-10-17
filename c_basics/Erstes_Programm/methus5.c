/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   methus5.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmessner <rmessner@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 14:35:19 by rmessner          #+#    #+#             */
/*   Updated: 2023/10/03 14:38:03 by rmessner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int eingezahlt;
    int erhalten;

    eingezahlt = 67 - 19;
    erhalten = 969 - 67;

    printf("Methusalem hat %i Jahre in die Rentenversicherung eingezahlt!\n", eingezahlt);
    printf("Methusalem bekommt für %i Jahre Rente!\n", erhalten);

    return (0);
}