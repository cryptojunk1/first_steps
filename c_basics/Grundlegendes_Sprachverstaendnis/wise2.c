/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wise2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmessner <rmessner@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 15:20:15 by rmessner          #+#    #+#             */
/*   Updated: 2023/10/07 15:30:02 by rmessner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>

#define WISE 1
#define SILLY !(WISE)

int main()
{
    char c;
    int  Pointdexter;
    int  Melvin;

    printf("Wer ist weise? Pointdexter oder Melvin?\n");
    printf("Gib entweder P oder M ein: ");
    c = (char)toupper(getchar());

    if (c == 'P')
    {
        Pointdexter = WISE;
        Melvin = SILLY;
    }
    else
    {
        Pointdexter = SILLY;
        Melvin = WISE;
    }

    if (Pointdexter == WISE && Melvin == SILLY)
    {
        printf("Pointdexter ist weise!\n");
        printf("Melvin ist verrueckt!\n");
    }
    else if (Pointdexter == SILLY && Melvin == WISE)
    {    
        printf("Pointdexter ist verrueckt!\n");
        printf("Melvin ist weise!\n");
    }
    if (Pointdexter == SILLY || Melvin == SILLY)
        printf("Einer von beiden ist verrueckt!\n");
    return (0);
}