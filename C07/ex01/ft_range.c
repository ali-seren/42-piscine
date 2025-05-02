/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aseren <aseren@student.42istanbul.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 22:28:19 by aseren            #+#    #+#             */
/*   Updated: 2025/04/30 01:43:02 by aseren           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	*ft_range(int min, int max)
{
	int	i;
	int	*range;
	int	size;

	if (min >= max)
	{
		return (NULL);
	}
	size = max - min;
	range = (int *)malloc(sizeof(int) * size);
	if (!range)
	{
		return (NULL);
	}
	i = 0;
	while (i < size)
	{
		range[i] = min + i;
		i++;
	}
	return (range);
}
