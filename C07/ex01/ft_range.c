/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbarrier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/13 10:49:19 by fbarrier          #+#    #+#             */
/*   Updated: 2021/07/14 12:44:10 by fbarrier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	size;
	int	*tab;

	i = 0;
	if (min >= max)
		return (NULL);
	size = max - min;
	tab = malloc(size * sizeof(int));
	while (i < size)
	{
		tab[i] = min + i;
		i++;
	}
	return (tab);
}
