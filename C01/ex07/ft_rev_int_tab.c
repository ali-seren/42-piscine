/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aseren <aseren@student.42istanbul.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 19:19:21 by aseren            #+#    #+#             */
/*   Updated: 2025/04/22 17:32:36 by aseren           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	temp;
	int	a;
	int	half;
	int	i;

	temp = 0;
	a = 0;
	half = size / 2;
	i = 0;
	while (half-- > 0)
	{
		temp = tab[i];
		tab[i++] = tab[size -1];
		tab[size-- -1] = temp;
	}
}

#include<stdio.h>

int main()
{
	int tab[]={1,2,3,4,5,6,7};
	int size = 7;
	int i = 0;
	ft_rev_int_tab(tab,size);
	while ( i< size)
	{
		printf("%d",tab[i]);
		i++;
	}

	return 0;
}
