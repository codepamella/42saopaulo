/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paregina <paregina@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 21:33:37 by paregina          #+#    #+#             */
/*   Updated: 2022/02/10 21:33:42 by paregina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char x1, char y1);

void	ft_print_comb2(void)
{
	int	x;
	int	y;

	x = 00;
	while (x <= 98)
	{
		y = x + 1;
		while (y <= 99)
		{
			ft_putchar((x / 10) + 48, x % 10 + 48);
			write(1, " ", 1);
			ft_putchar((y / 10) + 48, y % 10 + 48);
			if (x != 98)
			{
				write(1, ", ", 2);
			}
			y++;
		}
		x++;
	}
}

void	ft_putchar(char x1, char y1)
{
	write(1, &x1, 1);
	write(1, &y1, 1);
}		
