/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggoofbal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/25 22:15:10 by ggoofbal          #+#    #+#             */
/*   Updated: 2021/02/26 11:25:31 by ggoofbal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stddef.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	long long int curr;

	curr = min;
	if (range == NULL)
		return (-1);
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	*range = (int*)malloc(((long long int)max - (long long int)min) * 4);
	if (*range == NULL)
		return (-1);
	while (curr < max)
	{
		*(*range + curr - min) = curr;
		curr++;
	}
	if (((long long int)max - (long long int)min) > 2137483647)
		return (-1);
	else
		return ((long long int)max - (long long int)min);
}
