/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ulstr.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbarrier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/09 14:03:26 by fbarrier          #+#    #+#             */
/*   Updated: 2021/07/09 14:26:58 by fbarrier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	ulstr(char *str)
{
	int	i;

	i = 0;
	while(str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] -= 32;
			write(1, &str[i], 1);
		}
		else if(str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] += 32;
			write(1, &str[i], 1);
		}
		i++;
	}
	return (0);
}

int	main(int	argc, char **argv)
{
	if (argc != 2)
	{
		write(1, "o",1);
	}
	else
	{
		ulstr(argv[1]);
	}
	return (0);
}
