/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aseren <aseren@student.42istanbul.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 06:52:46 by aseren            #+#    #+#             */
/*   Updated: 2025/04/22 18:45:22 by aseren           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	a;
	int	b;

	a = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[a] != '\0')
	{
		b = 0;
		while (str[a + b] != '\0' && str[a + b] == to_find[b])
		{
			if (to_find[b + 1] == '\0')
				return (&str[a]);
			b++;
		}
		a++;
	}
	return (0);
}

#include<stdio.h>

int main()
{
	char str[]="merhaba ay";
	char to_find[]="b";

	printf("%s",ft_strstr(str,to_find));
}
