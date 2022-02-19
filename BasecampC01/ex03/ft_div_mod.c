/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paregina <paregina@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 15:08:20 by paregina          #+#    #+#             */
/*   Updated: 2022/02/11 15:25:31 by paregina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//apagar
#include <stdio.h>

void ft_div_mod(int a, int b, int *div, int *mod)

{
	if (b != 0)
	*div = a / b;
	*mod = a % b;
  
}
//apagar
int main(void)
{
	int div = 0;
	int mod = 0;
	ft_div_mod(11, 2, &div, &mod);
	printf("%d %d", div, mod);	
}
