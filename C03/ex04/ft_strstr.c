/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbarrier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/05 11:08:50 by fbarrier          #+#    #+#             */
/*   Updated: 2021/07/07 16:19:31 by fbarrier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	mot;

	if (*to_find == 0)
	{
		return (str);
	}
	i = 0;
	while (str[i] != '\0')
	{
		mot = 0;
		while (to_find[mot] == str[i + mot])
		{		
			if (to_find[mot + 1] == '\0')
			{
				return (str + i);
			}
			mot++;
		}
		i++;
	}
	return (0);
}
