/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aseren <aseren@student.42istanbul.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 03:51:07 by aseren            #+#    #+#             */
/*   Updated: 2025/04/25 21:24:47 by aseren           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n)
	{
		if (s1[i] != s2[i]
			|| s1[i] == '\0' || s2[i] == '\0')
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}


#include<stdio.h>

int main()
{
	char a[] = "merhabamer";
	char b[] = "merhaba";

	printf("%d",ft_strncmp(a,b,10));
}
