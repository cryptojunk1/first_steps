/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Color.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmessner <rmessner@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 14:35:18 by rmessner          #+#    #+#             */
/*   Updated: 2023/10/02 14:35:26 by rmessner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main()
{
	char	name[21];
	char	color[21];

	printf("Wie lautet dein Name?\n");
	scanf("%s", name);
	printf("Was ist deine Lieblingsfarbe? ");
	scanf("%s", color);
	printf("Dein Name lautet %s und deine Lieblingsfarbe ist %s!\n", name, color);

	return (0);
}