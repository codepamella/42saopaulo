/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paregina <paregina@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 19:49:02 by paregina          #+#    #+#             */
/*   Updated: 2022/02/18 22:16:12 by paregina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//A a Z = 65 AO 90
//a a z = 97 ao 122

int ft_str_is_alpha(char *str)
{
		
	while(*str != '\0')
	{
		if(!((*str >= 'A' && *str <='Z') || (*str >= 'a' && *str <= 'z')))
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
	char b[50] = "123ab";
	int r;
	r = ft_str_is_alpha(a);
	printf("%d", r);
	r = ft_str_is_alpha(b);
	printf("%d", r);
}