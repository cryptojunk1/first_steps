/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   confuse.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmessner <rmessner@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 15:34:29 by rmessner          #+#    #+#             */
/*   Updated: 2023/10/07 15:38:58 by rmessner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

 #include <stdio.h>

 int    main()
 {
    short   s;
    long    l;

    for (s = 0; s < 32000; s += 1000)
    {
        printf("%i\t", s);
    }
    printf("\nDruecken Sie die ENTER Taste!\n");
    getchar();

    for (l = 0; l < 1000000; l += 1000)
    {
        printf("%li\t", l);
    }

    return (0);
 }