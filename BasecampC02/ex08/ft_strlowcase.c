/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paregina <paregina@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 23:39:45 by paregina          #+#    #+#             */
/*   Updated: 2022/02/18 23:41:01 by paregina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strlowcase(char *str)
{
	int i;

	i=0;
	while(str[i] != '\0')
	{
		if(str[i] >= 65 && str[i] <= 90)
		{
			str[i] = str[i] + 32;
		}
		i++;
	}
	return (str);
}

#include <stdio.h>
int main()
{
	char x[] = "AbcDeF";
	ft_strlowcase(x);
	printf("%s\n", x);
}