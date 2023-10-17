/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   InsultSicher.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmessner <rmessner@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 14:48:30 by rmessner          #+#    #+#             */
/*   Updated: 2023/10/02 14:49:29 by rmessner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int main()
{
    char    idiot[21];

    printf("Name eines Idioten: \n");
    fgets(idiot, 20, stdin);
    printf("Ja ich finde auch das %s ein Idiot ist!\n", idiot);
    
    
    return (0);
}