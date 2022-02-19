/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paregina <paregina@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 15:41:53 by paregina          #+#    #+#             */
/*   Updated: 2022/02/12 22:18:04 by paregina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <unistd.h>


void 	ft_putstr(char *str)

{
    while(*str != '\0')
	{
		 write(1, str, 1);
	     str++;	
	}
}

//apagar	
int main(void)
{
	char i[] = "amor";
	ft_putstr(i);
}

