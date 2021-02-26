/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggoofbal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/25 20:56:22 by ggoofbal          #+#    #+#             */
/*   Updated: 2021/02/26 11:24:30 by ggoofbal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	long int	count;
	int			*arr;
	long int	i;

	i = 0;
	count = min;
	if (max <= min || !(arr = (int *)malloc(sizeof(int)
					* ((long int)max - (long int)min))))
		return (0);
	while (count <= max)
		arr[i++] = count++;
	return (arr);
}
