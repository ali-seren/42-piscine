/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aseren <aseren@student.42istanbul.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 01:43:52 by aseren            #+#    #+#             */
/*   Updated: 2025/04/30 02:37:06 by aseren           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	*ret;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	ret = (int *)malloc(sizeof(int) * (max - min));
	if (!ret)
	{
		return (-1);
	}
	i = 0;
	while (min < max)
	{
		ret[i] = min;
		i++;
		min++;
	}
	*range = ret;
	return (i);
}
