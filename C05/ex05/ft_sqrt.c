/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbarrier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/08 10:10:35 by fbarrier          #+#    #+#             */
/*   Updated: 2021/07/12 15:12:47 by fbarrier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_sqrt(int nb)
{
	int	i;

	i = 0;
	if (nb > 0)
	{
		while (i * i <= nb && (i <= 46340))
		{
			if (i * i == nb)
			{
				return (i);
			}	
			i++;
		}
	}
	return (0);
}
