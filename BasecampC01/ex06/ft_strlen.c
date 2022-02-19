/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paregina <paregina@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 21:27:28 by paregina          #+#    #+#             */
/*   Updated: 2022/02/14 19:51:37 by paregina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//apagar
#include <stdio.h>

int ft_strlen(char *str)
{
	int x;

	x = 0;
	while(*str)
	{
		str++;
		x++;
	}
	return x;
}

//apagar
int main(void)
{
	char	str[] = "amor";
	int x = ft_strlen(str);
	printf("%d\n", x);
}