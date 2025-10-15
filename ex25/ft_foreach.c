/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lluiggi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 17:53:49 by lluiggi           #+#    #+#             */
/*   Updated: 2025/10/14 18:07:44 by lluiggi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_foreach(int *tab, int length, void (*f)(int))
{
	int	i;

	i = 0;
	while (i < length)
	{
		f(tab[i]);
		i++;
	}
}

#include <stdio.h>
int	main(void)
{
	int tab[] = {1, 2, 3, 4, 5};
	int i = 0;
	while (i < 5)
	{
		printf("%d\n", tab[i]);
		i++;
	}
	return 0;
}
