/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aseren <aseren@student.42istanbul.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/12 14:18:51 by aseren            #+#    #+#             */
/*   Updated: 2025/04/15 17:38:04 by aseren           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_charput(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb(void)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	while (i <= 7)
	{
		j = i + 1;
		while (j <= 8)
		{
			k = j + 1;
			while (k <= 9)
			{
				ft_charput(i );
				ft_charput(j );
				ft_charput(k );
				if (i != 7|| j!=8|| k!=9  )
					write(1, ", ", 2);
				k++;
			}
			j++;
		}
		i++;
	}
}

int main()
{
	ft_print_comb();
}
