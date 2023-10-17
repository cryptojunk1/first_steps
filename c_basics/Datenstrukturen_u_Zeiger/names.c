/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   names.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmessner <rmessner@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 10:48:19 by rmessner          #+#    #+#             */
/*   Updated: 2023/10/10 10:53:03 by rmessner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Dreidimensionale Arrays */

#include <stdio.h>

int main()
{
    char names[4][3][10] =
    {
        {"Bob", "Bill",   "Bret"},
        {"Dan", "Dave",   "Don"},
        {"George",  "Harry",    "John"},
        {"Mike",    "Steve",    "Vern"}
    };

    int a, b;

    for(a = 0; a < 4; a++)
    {
        for(b = 0; b < 3; b++)
        {
            printf("%s\n", names[a][b]);
        }
    }
    return (0);
}