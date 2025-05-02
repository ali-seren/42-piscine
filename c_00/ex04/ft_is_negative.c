/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aseren <aseren@student.42istanbul.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/12 12:28:15 by aseren            #+#    #+#             */
/*   Updated: 2025/04/15 14:41:20 by aseren           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_is_negative(int n)
{
	char	cevap;

	if (n < 0)
	{
		cevap = 'N';
		write(1, &cevap, 1);
	}
	else
	{
		cevap = 'P';
		write(1, &cevap, 1);
	}
}

int main()

{
	ft_is_negative(-5);
}
