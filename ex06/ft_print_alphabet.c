/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lluiggi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/08 17:33:15 by lluiggi           #+#    #+#             */
/*   Updated: 2025/10/13 14:50:12 by lluiggi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "unistd.h"
void	ft_putchar(char c)
{
        write (1, &c, 1);
}

void	ft_print_alphabet(void)
{
	char	c;

	c = 'a';
	while (c <= 'z')
	{
		ft_putchar(c);
		c++;
	}
}

int main()
{
	ft_print_alphabet();
}
