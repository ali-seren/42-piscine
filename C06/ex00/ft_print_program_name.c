/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aseren <aseren@student.42istanbul.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 13:36:50 by aseren            #+#    #+#             */
/*   Updated: 2025/04/29 05:13:36 by aseren           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int	main(int argc, char **argv)
{
	int	i;

	i = 0;
	(void)argc;
	while (argv[0][i])
	{
		write(1, &argv[0][i], 1);
		i++;
	}
	write(1, "\n", 1);
}
