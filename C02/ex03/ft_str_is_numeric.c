/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbarrier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/03 12:45:33 by fbarrier          #+#    #+#             */
/*   Updated: 2021/07/03 20:41:41 by fbarrier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	while (*str != '\0')
	{
		if (!(*str >= '0' && *str <= '9'))
		{
			return (0);
		}
		str++;
	}
	return (1);
}
