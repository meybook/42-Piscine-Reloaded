/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lluiggi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 15:12:08 by lluiggi           #+#    #+#             */
/*   Updated: 2025/10/13 15:12:38 by lluiggi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	result;

	result = 1;
	if (nb < 0)
		return (0);
	while (nb > 0)
	{
		result = result * nb;
		nb--;
	}
	return (result);
}
/*
#include<stdio.h>
int main()
{
	printf("TEST : %d\n", ft_iterative_factorial(5));
        printf("TEST : %d\n", ft_iterative_factorial(-5));
        printf("TEST : %d\n", ft_iterative_factorial(0));
        printf("TEST : %d\n", ft_iterative_factorial(' '));
}
*/