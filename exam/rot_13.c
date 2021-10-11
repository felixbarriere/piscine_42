/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot_13.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbarrier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/09 14:27:02 by fbarrier          #+#    #+#             */
/*   Updated: 2021/07/09 15:19:18 by fbarrier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	ulstr(char *str)
{
	int	i;

	i = 0;
	while(str[i])
	{
		if (str[i] <= 'm')
		{
			str[i] += 13;
			write(1, &str[i], 1);
		}
		else if (str[i] >= 'm')
		{
			str[i] -= 13;
			write(1, &str[i], 1);
		}
		i++;
	}
	return (0);	
}

int	main(int	argc, char **argv)
{
	ulstr(argv[1]);
	return (0);
}
