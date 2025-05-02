/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aseren <aseren@student.42istanbul.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 05:14:40 by aseren            #+#    #+#             */
/*   Updated: 2025/04/28 19:02:18 by aseren           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_swap_dec(unsigned char c)
{
	char	*hex_base;

	hex_base = "0123456789abcdef";
	ft_putchar('\\');
	ft_putchar(hex_base[c / 16]);
	ft_putchar(hex_base[c % 16]);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 32 && str[i] <= 126)
			ft_putchar(str[i]);
		else
			ft_swap_dec((unsigned char)str[i]);
		i++;
	}
}
