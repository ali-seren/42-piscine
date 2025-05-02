/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aseren <aseren@student.42istanbul.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/12 11:00:10 by aseren            #+#    #+#             */
/*   Updated: 2025/04/13 19:52:52 by aseren           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	counter;

	counter = 'z';
	while (counter >= 'a')
	{
		write(1, &counter, 1);
		counter--;
	}
}
