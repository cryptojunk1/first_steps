/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pointer.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmessner <rmessner@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 20:47:45 by rmessner          #+#    #+#             */
/*   Updated: 2023/05/03 21:24:13 by rmessner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	main()
{
	int *ptr;
	int *ptry;
	int	x;
	int sum;
	
	x = 2;
	ptr = &x;

	int y = 2;
	ptry = &y;

	sum = *ptr + *ptry;
	printf("%p\n", ptr);
	printf("\nSum:%d\n", sum);

	*ptr = 10;
	*ptry = 10;
	sum = *ptr + *ptry;
	printf("Neue Summe: %d\n", sum);
}