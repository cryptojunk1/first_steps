/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Insult1.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmessner <rmessner@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 14:43:42 by rmessner          #+#    #+#             */
/*   Updated: 2023/10/02 14:48:10 by rmessner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
* demonstriert wie unsicher scanf sein kann! Wenn einfach mehr Zeichen eingegeben werden als Buffer zu verfügung ist
*/


#include <stdio.h>

int main()
{
    char    idiot[21];

    printf("Name eines Idioten: \n");
    scanf("%s", idiot);
    printf("Ja ich finde auch das %s ein Idiot ist!\n", idiot);
    
    
    return (0);
}