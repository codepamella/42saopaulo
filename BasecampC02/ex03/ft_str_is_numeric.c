/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paregina <paregina@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 19:50:14 by paregina          #+#    #+#             */
/*   Updated: 2022/02/18 22:15:08 by paregina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_str_is_numeric(char *str)
{
		
	while(*str != '\0')
	{
		if(!(*str >= 48 && *str <= 57))
		{
			return (0);
		}
		str++;
	}
	return (1);
}

#include <stdio.h>
int main(void)
{
	char a[50] = "Pamella";
	char b[50] = "1";
	int r;
	r = ft_str_is_numeric(a);
	printf("%d", r);
	r = ft_str_is_numeric(b);
	printf("%d", r);
}