/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Whoru.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmessner <rmessner@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 14:36:03 by rmessner          #+#    #+#             */
/*   Updated: 2023/10/02 14:36:04 by rmessner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

/*
*	Dieses Programm fragt nach dem Namen und gibt es auf dem Terminal, zusammen mit einer netten Nachricht wieder!
*/
int	main()
{
	char me[20];
	printf("Wie heißen Sie?");
	fgets(me, 20, stdin);
	printf("Hallo %s, nett, Sie kennen zu lernen!\n", me);
	return (0);
}