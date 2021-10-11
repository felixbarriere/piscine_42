/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbarrier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/05 19:10:02 by fbarrier          #+#    #+#             */
/*   Updated: 2021/07/11 14:25:06 by fbarrier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	unsigned int	m;

	if (nb < 0)
	{
		m = (nb * -1);
		ft_putchar('-');
	}
	else
	{
		m = (nb);
	}
	if (m > 9)
	{
		ft_putnbr(m / 10);
		ft_putnbr(m % 10);
	}
	else
	{
		ft_putchar(m + '0');
	}
}
