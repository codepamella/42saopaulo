/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paregina <paregina@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 20:41:49 by paregina          #+#    #+#             */
/*   Updated: 2022/02/18 15:19:33 by paregina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//apagar
#include <stdio.h>

char	*ft_strcpy(char *dest, char *src)

{
	int	i;

	i = 0;
    while(src[i] != '\0')
	{
		 dest[i] = src[i];
	     i++;
		 
	}
	dest[i] = '\0';
	return (dest);
}

//apagar
int main()
{
	char i[50] = "pamella";
	char x[50] = "regina";
	ft_strcpy(i, x);
	printf("%s\n", i);
	
}

