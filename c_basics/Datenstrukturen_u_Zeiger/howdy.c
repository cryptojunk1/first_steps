/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   howdy.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmessner <rmessner@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 15:04:19 by rmessner          #+#    #+#             */
/*   Updated: 2023/10/12 15:10:25 by rmessner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <malloc.h>

int main()
{
    char *string;

    string = malloc(80);
    if(string == NULL)
        printf("Kein Speicher freigegeben!\n");
    else
    {
        strcpy(string, "Griass di God!");
        printf("%s\n", string);
        free(string);
        return (0);
    }
}