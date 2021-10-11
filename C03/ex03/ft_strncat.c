/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbarrier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/05 10:31:11 by fbarrier          #+#    #+#             */
/*   Updated: 2021/07/05 18:27:46 by fbarrier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	y;

	i = 0;
	while (dest[i])
	{
		i++;
	}
	y = 0;
	while (src[y] && y < nb)
	{
		dest[i] = src[y];
		y++;
		i++;
	}
	dest[i] = 0;
	return (dest);
}
