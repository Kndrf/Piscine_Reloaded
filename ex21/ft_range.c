/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: robihaap <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 12:18:36 by robihaap          #+#    #+#             */
/*   Updated: 2017/11/07 16:47:40 by robihaap         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int *copy;
	int i;

	if (min >= max)
		return (NULL);
	copy = (int *)malloc(sizeof(int) * (max - min));
	i = 0;
	while (min < max)
	{
		copy[i] = min;
		i++;
		min++;
	}
	return (copy);
}
