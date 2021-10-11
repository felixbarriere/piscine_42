/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbarrier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/01 09:34:49 by fbarrier          #+#    #+#             */
/*   Updated: 2021/07/01 10:09:10 by fbarrier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_display(int n)
{
	int	first;
	int	second;

	if (n <= 9)
	{
		ft_putchar(0 + 48);
		ft_putchar(n + 48);
	}
	else
	{
		first = n / 10;
		second = n % 10;
		ft_putchar (first + 48);
		ft_putchar (second + 48);
	}
}

void	ft_print_comb2(void)
{
	int	f;
	int	s;

	f = 0;
	while (f <= 99)
	{
		s = f + 1;
		while (s <= 99)
		{
			ft_display(f);
			ft_putchar(' ');
			ft_display(s);
			if (f < 98 || s < 99)
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
			s++;
		}
		f++;
	}
}
