/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbarrier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/05 19:11:47 by fbarrier          #+#    #+#             */
/*   Updated: 2021/07/10 20:44:35 by fbarrier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	res;
	int	sign;

	res = 0;
	sign = 1;
	while ((*str == ' ') || (*str >= '\t' && *str <= '\r'))
	{
		str++;
	}
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
		{
			sign *= -1;
		}
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		res = 10 * res + (*str - '0');
		str++;
	}
	return (res * sign);
}