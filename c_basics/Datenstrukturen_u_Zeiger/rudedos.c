/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rudedos.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmessner <rmessner@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 10:55:55 by rmessner          #+#    #+#             */
/*   Updated: 2023/10/09 11:12:41 by rmessner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <ctype.h>

const int   maxlaenge = 64;
const int   outputlaenge = (2*maxlaenge);

int main()
{
    char command[maxlaenge + 1];
    const char oh[] = "Aha, nun ist es also ein \"";
    const char now[] = "\" oder was?\n";
    char output[outputlaenge + 1];
    int i;

    for(;;)
    {
        printf("C:\\>");
        fgets(command, maxlaenge, stdin);
        if(command[strlen(command) - 1] == '\n')
            command[strlen(command) - 1] = '\0';
        
        strncpy(output, oh, outputlaenge);

        i = 0;
        while(command[i])
        {
            command[i] = (char)toupper(command[i]);
            i++;
        }
    strncat(output, command, outputlaenge - strlen(output));
    strncat(output, now, outputlaenge - strlen(output));

    puts(output);
    }
    return (0);
}