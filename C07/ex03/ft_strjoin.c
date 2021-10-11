/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbarrier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/14 11:54:55 by fbarrier          #+#    #+#             */
/*   Updated: 2021/07/14 14:45:29 by fbarrier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_size_dest(int size, char **strs, char *sep)
{
	int		size_strs;
	int		size_sep;
	int		i;
	char	*dest;

	i = 0;
	size_sep = ft_strlen(sep);
	while (i < size)
	{
		size_strs = size_strs + ft_strlen(strs[i]);
		i++;
	}
	dest = malloc(sizeof(char) * (size_strs + size_sep * (size - 1) + 1));
	return (dest);
}

void	ft_strcat(char *str1, char *str2)
{	
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (str1[i] != '\0')
	{
		i++;
	}
	while (str2[j] != '\0')
	{
		str1[i] = str2[j];
		i++;
		j++;
	}
	str1[i] = '\0';
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	char	*dest;

	i = 0;
	dest = ft_size_dest(size, strs, sep);
	dest[0] = '\0';
	if (size == 0)
	{
		dest = "";
	}
	while (i < size)
	{
		ft_strcat(dest, strs[i]);
		if (i < size - 1)
		{
			ft_strcat(dest, sep);
		}
		i++;
	}	
	return (dest);
}

#include <stdio.h>

char *ft_strjoin(int size, char **strs, char *sep);

int	main(int argc, char **argv)
{
	printf("./ex03/output___said___this___is___a___success :\n");
	printf("%s\n",  ft_strjoin(argc, argv, "___"));
}
