/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   methus2.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmessner <rmessner@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 08:50:25 by rmessner          #+#    #+#             */
/*   Updated: 2023/10/03 08:53:21 by rmessner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int alter;
    char jahre[30];

    printf("Wie alt war Methusalem? ");
    fgets(jahre, 30, stdin);
    alter = atoi(jahre);
    printf("Methusalem war also %i Jahre alt?\n", alter);

    return (0);
}