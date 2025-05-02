/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aseren <aseren@student.42istanbul.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 08:29:31 by aseren            #+#    #+#             */
/*   Updated: 2025/04/30 01:35:04 by aseren           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

char	*ft_strdup(char *src)
{
	int		i;
	int		len;
	char	*copy;

	len = 0;
	while (src[len])
	{
		len++;
	}
	copy = (char *)malloc(sizeof(char) * (len + 1));
	if (!copy)
		return (NULL);
	i = 0;
	while (i <= len)
	{
		copy[i] = src[i];
		i++;
	}
	return (copy);
}
