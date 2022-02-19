/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paregina <paregina@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 15:28:14 by paregina          #+#    #+#             */
/*   Updated: 2022/02/11 15:38:21 by paregina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//apagar
#include <stdio.h>

void ft_ultimate_div_mod(int *a, int *b)

{
	int div;
	int mod;
	
	if (b != 0)
	{
		div = *a / *b;
		mod = *a % *b;
		*a = div;
		*b = mod;
	} 
}

//apagar
int main(void)
{
	int a = 11;
	int b = 2;
	ft_ultimate_div_mod(&a, &b);
	printf("%d %d", a, b);	
}
