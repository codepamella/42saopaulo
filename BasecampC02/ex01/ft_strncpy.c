/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paregina <paregina@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 13:47:58 by paregina          #+#    #+#             */
/*   Updated: 2022/02/19 02:25:41 by paregina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
    while (i < n && src[i] != '\0')
	{
		 dest[i] = src[i];
	     i++;
	}
	while(i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

#include <stdio.h>

int main()
{
	char dest[50];
	char orig[] = "pamella regina";

	ft_strncpy(dest, orig, 5);

	printf("%s %s", orig, dest);
}