/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mybday.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmessner <rmessner@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 14:12:42 by rmessner          #+#    #+#             */
/*   Updated: 2023/10/12 14:16:24 by rmessner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int main()
{
    struct date
    {
        int month;
        int day;
        int year;
    };
    
    struct family
    {
        char name[20];
        struct date birthday;
    } me;

    /* Geben Sie hier Ihre Daten ein*/

    strcpy(me.name, "Rene");
    me.birthday.month = 9;
    me.birthday.day = 12;
    me.birthday.year = 1987;

    printf("%s wurde geboren am %i-%i-%i\n", me.name, me.birthday.month, me.birthday.day, me.birthday.year);
    return(0);
}