/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pods.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmessner <rmessner@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 15:53:47 by rmessner          #+#    #+#             */
/*   Updated: 2023/10/07 15:56:30 by rmessner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Dieses Programm zeigt 42 auf drei Arten an! */

#include <stdio.h>

const int   pods = 42;

int main()
{
    printf("Sie müssen %i Stueck ausliefern!\n", pods);
    printf("Sie müssen %o Stueck ausliefern!\n", pods);
    printf("Sie müssen 0x%x Stueck ausliefern!\n", pods);
    printf("Sie müssen 0X%X Stueck ausliefern!\n", pods);
    return (0);
}