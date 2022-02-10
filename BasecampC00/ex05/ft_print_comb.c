/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paregina <paregina@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 01:05:27 by paregina          #+#    #+#             */
/*   Updated: 2022/02/10 20:51:09 by paregina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_puchar(char x, char y, char z);

void	ft_print_comb(void)
{
	char	x;
	char	y;
	char	z;

	x = '0';
	while (x <= '7')
	{
		y = x +1;
		while (y <= '8')
		{
			z = y + 1;
			while (z <= '9')
			{
				ft_puchar(x, y, z);
				z++;
			}
			y++;
		}
		x++;
	}	
}

void	ft_puchar(char x, char y, char z)
{
	write(1, &x, 1);
	write(1, &y, 1);
	write(1, &z, 1);
	if (x != '7')
	{
		write(1, ", ", 2);
	}
}
