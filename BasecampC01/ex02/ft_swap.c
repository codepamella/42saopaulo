/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paregina <paregina@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 14:52:07 by paregina          #+#    #+#             */
/*   Updated: 2022/02/11 14:59:18 by paregina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//apagar
#include <stdio.h>

void	ft_swap(int *a, int *b)

{
	int x;
	
	x = *a;
	*a = *b;
	*b = x;
}
//apagar
int main(void)
{
	int a = 12;
	int b = 10;
	ft_swap(&a, &b);
	printf("%d %d", a, b);	
}