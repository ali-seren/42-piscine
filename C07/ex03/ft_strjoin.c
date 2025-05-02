/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aseren <aseren@student.42istanbul.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 02:38:36 by aseren            #+#    #+#             */
/*   Updated: 2025/04/30 07:05:37 by aseren           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

int	ft_strlen(char *str)
{
	int len;

	len = 0;
	while (str[len])
	{
		len++;
	}
	return (len);
}

int	ft_length(int size, char **strs, char *sep)
{
	int	i;
	int	len;
	int	seplen;

	seplen = strlen(sep);
	len = 0;
	i = 0;
	while (i < size)
	{
		len += ft_strlen(strs[i]);
		if (i < size -1)
		{
			len += seplen;
		}
		i++;
	}
	return (len);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i= 0;
	while(src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strcat(char *dest, char *src)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0')
	{
		dst[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{

}

