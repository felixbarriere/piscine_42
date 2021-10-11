/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbarrier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/10 12:04:57 by fbarrier          #+#    #+#             */
/*   Updated: 2021/07/11 16:31:54 by fbarrier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_is_base_ok(char *base)
{
	int	i;
	int	j;

	i = 0;
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-')
			return (-1);
		else if ((base[i] >= 9 && base[i] <= 13) || base[i] == ' ')
			return (-1);
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (-1);
			j++;
		}
		i++;
	}
	if (i < 2)
		return (-1);
	else
		return (i);
}

int	ft_position_in_base(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (c == base[i])
			return (i);
		i++;
	}
	return (-1);
}

int	ft_start_str(char *str, int *sign)
{
	int	i;

	i = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
	{
		i++;
	}
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
		{
			*sign *= -1;
		}
		i++;
	}
	return (i);
}

int	ft_atoi_base(char *str, char *base)
{
	int	res;
	int	sign;
	int	i;

	res = 0;
	sign = 1;
	i = ft_start_str(str, &sign);
	if (ft_is_base_ok(base) == -1)
	{
		return (0);
	}
	while (ft_position_in_base(str[i], base) != -1)
	{
		res = res * ft_is_base_ok(base)
			+ (sign * ft_position_in_base(str[i], base));
		i++;
	}
	return (res);
}
