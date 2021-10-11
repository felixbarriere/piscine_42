/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbarrier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/03 20:19:04 by fbarrier          #+#    #+#             */
/*   Updated: 2021/07/04 14:59:51 by fbarrier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int	first_letter;
	int	c;

	first_letter = 0;
	c = 0;
	while (str[c] != '\0')
	{
		if (first_letter == 0 && (str[c] >= 'a' && str[c] <= 'z'))
		{
			str[c] -= 32;
			first_letter++;
		}
		else if (first_letter > 0 && (str[c] >= 'A' && str[c] <= 'Z'))
			str[c] += 32;
		else if ((str[c] < '0') || (str[c] > '9' && str[c] < 'A')
			|| (str[c] > 'Z' && str[c] < 'a') || (str[c] > 'z'))
			first_letter = 0;
		else
			first_letter++;
		c++;
	}
	return (str);
}
