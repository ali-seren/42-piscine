/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aseren <aseren@student.42istanbul.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 19:13:07 by aseren            #+#    #+#             */
/*   Updated: 2025/04/28 18:33:33 by aseren           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

char	*ft_strcpy(char *dest, char *src)
{
	char	*i;

	i = dest;
	while (*src)
	{
		*i = *src;
		i++;
		src++;
	}
	*i = '\0';
	return (dest);
}
