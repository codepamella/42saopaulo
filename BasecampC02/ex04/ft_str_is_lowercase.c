/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paregina <paregina@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 20:11:25 by paregina          #+#    #+#             */
/*   Updated: 2022/02/18 22:22:56 by paregina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_str_is_lowercase(char *str)
{
		
	while(*str != '\0')
	{
		if(!(*str >= 97 && *str <= 122))
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
	char b[50] = "aaa";
	char c[50] = "";
	int r;
	r = ft_str_is_lowercase(a);
	printf("%d", r);
	r = ft_str_is_lowercase(b);
	printf("%d", r);
	r = ft_str_is_lowercase(c);
	printf("%d", r);
}