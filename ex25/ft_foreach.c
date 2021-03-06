/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: robihaap <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 13:54:32 by robihaap          #+#    #+#             */
/*   Updated: 2017/11/07 14:04:07 by robihaap         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_foreach(int *tab, int lengh, void (*f)(int))
{
	int i;

	i = 0;
	while (i < lengh)
	{
		f(tab[i]);
		i++;
	}
}
