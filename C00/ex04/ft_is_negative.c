/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbarrier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/30 17:49:57 by fbarrier          #+#    #+#             */
/*   Updated: 2021/06/30 17:49:59 by fbarrier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	char	resultat;

	if (n < 0)
	{
		    resultat = 'N';
	}
	else
	{
		    		resultat = 'P';
	}
	write(1, &resultat, 1);
}
