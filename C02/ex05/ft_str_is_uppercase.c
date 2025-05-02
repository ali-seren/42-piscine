/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aseren <aseren@student.42istanbul.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/20 06:03:15 by aseren            #+#    #+#             */
/*   Updated: 2025/04/20 06:17:28 by aseren           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int	ft_str_is_uppercase(char *str)
{
	while (*str)
	{
		if (*str < 'A' || *str > 'Z')
			return (0);
		str++;
	}
	return (1);
}
