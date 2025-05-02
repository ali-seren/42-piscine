/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aseren <aseren@student.42istanbul.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 01:38:43 by aseren            #+#    #+#             */
/*   Updated: 2025/04/28 16:58:58 by aseren           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	new_word;

	i = 0;
	new_word = 1;
	while (str[i])
	{
		if ((str[i] >= 'a' && str[i] <= 'z')
			|| (str[i] >= 'A' && str[i] <= 'Z')
			|| (str[i] >= '0' && str[i] <= '9'))
		{
			if (new_word && (str[i] >= 'a' && str[i] <= 'z'))
				str[i] = str[i] - 32;
			else if (!new_word && (str[i] >= 'A' && str[i] <= 'Z'))
				str[i] = str[i] + 32;
			if (str[i] >= '0' && str[i] <= '9')
				new_word = 0;
			else
				new_word = 0;
		}
		else
			new_word = 1;
		i++;
	}
	return (str);
}
