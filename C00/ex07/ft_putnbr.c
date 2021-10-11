/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbarrier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/01 10:24:50 by fbarrier          #+#    #+#             */
/*   Updated: 2021/07/01 18:49:54 by fbarrier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int n)
{
	unsigned int	m;

	if (n < 0)
	{
		m = (n * -1);
		ft_putchar('-');
	}
	else
	{
		m = (n);
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
