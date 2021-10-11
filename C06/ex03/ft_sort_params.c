/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbarrier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/12 15:53:15 by fbarrier          #+#    #+#             */
/*   Updated: 2021/07/12 20:36:36 by fbarrier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

void	putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

char	sort_params(char **tab, int argc_number)
{
	int		i;
	int		j;
	char	*tmp;

	i = 1;
	while (i < argc_number)
	{
		j = i + 1;
		while (j < argc_number)
		{
			if (ft_strcmp (tab[i], tab[j]) > 0)
			{
				tmp = tab[i];
				tab[i] = tab[j];
				tab[j] = tmp;
			}
			j++;
		}
		i++;
	}
	return (**tab);
}

int	main(int argc, char **argv)
{
	int	i;

	sort_params(argv, argc);
	i = 1;
	while (i <= argc)
	{
		if (argv[i])
		{
			putstr (argv[i]);
			write (1, "\n", 1);
		}
		i++;
	}
	return (0);
}
