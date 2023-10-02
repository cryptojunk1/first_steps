/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pointerarray.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmessner <rmessner@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 21:39:19 by rmessner          #+#    #+#             */
/*   Updated: 2023/05/03 21:56:17 by rmessner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	main(void)
{
	int array2[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	int i;
	char s[] = "Hallo Meister Eder! Pumukl ist nicht zu Hause!";

	int *ptr = &array2[0];
	i = 0;
	while (i < 10)
	{	
		printf("%i\n", *ptr);
		*ptr = 3;
		i++;
		ptr++;
	}

	i = 0;

	while (i < 10)
	{
		printf("%i\n", array2[i]);
		i++;
	}
}