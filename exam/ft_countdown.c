/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_countdown.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbarrier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/08 17:49:46 by fbarrier          #+#    #+#             */
/*   Updated: 2021/07/09 14:03:10 by fbarrier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char	ft_repeat_alpha(char *str)
{
	int	i;
	int j;

	i = 0;
	while (str[i])
	{
		if(str[i] >= 'a' && str[i] <= 'z')
		{
			j = 0; 
			while (j <= (str[i] - 'a' - 1))
			{
				write(1, &str[i], 1);
				j++;
			}
		}
		else if (str[i] >= 'A' && str[i] <= 'Z')
		{
			j = 0;
			while (j <= (str[i] - 'A' - 1))
			{
				write(1, &str[i], 1);
				j++;
			}
		}
		else
		{
			write(1, &str[i], 1);
		}
		i++;
	}
	return (0);
}


int	main(int	argc, char **argv)
{
	int	i;

	i = 0;
	if (argc != 2)
	{
		write (1, "o", 1);
	}
	else 
	{		
		ft_repeat_alpha(argv[1]);
	}
	return (0);
}
