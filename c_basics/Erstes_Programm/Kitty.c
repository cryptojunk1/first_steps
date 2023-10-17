/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Kitty.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmessner <rmessner@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 08:28:36 by rmessner          #+#    #+#             */
/*   Updated: 2023/10/03 08:34:51 by rmessner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Das ist ein Programm das den Namen deiner Katze abfragt */

#include <stdio.h>

int main()
{
	char	name[20];

	printf("Wie wollen Sie Ihre Katze nennen?\t");
	fgets(name, 20, stdin);
	printf("%s ist ein sehr hässlicher Name... Such dir einen anderen aus!!\t", name);
	fgets(name, 20, stdin);
	printf("Jaa! %s ist ein wirklich Schöner Name!\n", name);

	return (0);
}