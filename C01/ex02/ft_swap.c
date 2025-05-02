/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aseren <aseren@student.42istanbul.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 14:47:12 by aseren            #+#    #+#             */
/*   Updated: 2025/04/17 19:45:36 by aseren           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_swap(int *a, int *b)
{
	int	gecicideger;

	gecicideger = *a;
	*a = *b;
	*b = gecicideger;
}

#include<stdio.h>

int main()
{
	int a = 50 ;
	int b = 8;
	ft_swap(&a,&b);
	printf("a = %d , b = %d :",a,b);
}
