/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paregina <paregina@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 23:51:44 by paregina          #+#    #+#             */
/*   Updated: 2022/02/10 20:51:47 by paregina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)

{
	char	result;

	if (n >= 0)
	{
		result = 'P';
	}
	else
	{
		result = 'N';
	}
	write(1, &result, 1);
}
