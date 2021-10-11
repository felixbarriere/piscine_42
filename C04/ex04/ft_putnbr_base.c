/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbarrier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/06 18:34:41 by fbarrier          #+#    #+#             */
/*   Updated: 2021/07/10 20:44:19 by fbarrier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strlen(char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		i++;
	}
	return (i);
}

int	ft_is_same_number(char *base)
{
	int	i;
	int	j;

	i = 0;
	while (base[i])
	{
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
			{
				return (0);
			}
			j++;
		}
		i++;
	}
	return (1);
}

int	is_base_ok(char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-' || base[i] < 31 || base[i] == ' ')
		{
			return (0);
		}
		i++;
	}
	if (ft_is_same_number(base) == 0)
		return (0);
	else if (ft_strlen(base) == 0 || ft_strlen(base) == 1)
		return (0);
	else
		return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	unsigned int	m;

	if (is_base_ok(base) != 0)
	{
		if (nbr < 0)
		{
			m = (nbr * -1);
			ft_putchar('-');
		}
		else
		{
			m = (nbr);
		}
		if (m > (unsigned int)ft_strlen(base) - 1)
		{
			ft_putnbr_base(m / ft_strlen(base), base);
			ft_putnbr_base(m % ft_strlen(base), base);
		}
		else
			ft_putchar(base[m]);
	}
}
