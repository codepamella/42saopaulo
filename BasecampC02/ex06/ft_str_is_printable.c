/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paregina <paregina@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 22:29:23 by paregina          #+#    #+#             */
/*   Updated: 2022/02/18 22:40:12 by paregina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_str_is_uppercase(char *str)
{
		
	while(*str != '\0')
	{
		if(!(*str >= 32 && *str <= 126))
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
	char a[50] = "PAMELLA";
	char b[50] = "\n";
	char c[50] = "";
	int r;
	r = ft_str_is_uppercase(a);
	printf("%d", r);
	r = ft_str_is_uppercase(b);
	printf("%d", r);
	r = ft_str_is_uppercase(c);
	printf("%d", r);
}