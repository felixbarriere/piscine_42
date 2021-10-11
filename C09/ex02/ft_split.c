/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   split.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbarrier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/19 10:12:42 by fbarrier          #+#    #+#             */
/*   Updated: 2021/07/20 11:43:59 by fbarrier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_is_in_separator(char	c, char *charset)
{
	int	i;

	i = 0;
	while (charset[i])
	{
		if (c == charset[i] || c == '\0')
			return (1);
		i++;
	}
	return (0);
}

int	ft_strlen(char *str, char *charset)
{
	int	i;

	i = 0;
	while (str[i] && !ft_is_in_separator(str[i], charset))
	{
		i++;
	}
	return (i);
}

int	ft_word_count(char *str, char *charset)
{
	int	i;
	int	w;

	if (!str[0])
		return (0);
	i = 1;
	w = !ft_is_in_separator(str[0], charset);
	while (str[i])
	{
		if (ft_is_in_separator(str[i - 1], charset)
			&& !ft_is_in_separator(str[i], charset))
			w++;
		i++;
	}
	return (w);
}

char	*ft_strdup(char *src, int n)
{
	char	*dest;
	int		i;

	i = 0;
	dest = malloc((n + 1) * sizeof(char));
	if (!dest)
		return (NULL);
	dest[n] = '\0';
	while (i < n && src[i])
	{	
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	**ft_split(char *str, char *charset)
{
	int		i;
	int		words;
	char	**tab;

	words = 0;
	tab = malloc(sizeof(char *) * (ft_word_count (str, charset) + 1));
	if (tab == NULL)
		return (NULL);
	i = 0;
	while (str[i])
	{
		if (!ft_is_in_separator(str[i], charset))
		{
			tab[words] = ft_strdup(&str[i], ft_strlen(&str[i], charset));
			if (tab[words] == NULL)
				return (NULL);
			i = i + ft_strlen(&str[i], charset);
			words++;
		}
		else
			i++;
	}	
	tab[words] = NULL;
	return (tab);
}
