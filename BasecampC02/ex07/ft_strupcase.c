/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paregina <paregina@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 23:08:07 by paregina          #+#    #+#             */
/*   Updated: 2022/02/18 23:36:00 by paregina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strupcase(char *str)
{
	int i;

	i=0;
	while(str[i] != '\0')
	{
		if(str[i] >= 97 && str[i] <= 122)
		{
			str[i] = str[i] - 32;
		}
		i++;
	}
	return (str);
}

#include <stdio.h>
int main()
{
	char x[] = "AbcDeF";
	ft_strupcase(x);
	printf("%s\n", x);
}