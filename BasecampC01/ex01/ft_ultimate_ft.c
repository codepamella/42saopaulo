/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_ft.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paregina <paregina@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 14:41:52 by paregina          #+#    #+#             */
/*   Updated: 2022/02/11 14:48:00 by paregina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//apagar
#include <stdio.h>

void	ft_ultimate_ft(int *********nbr)

{
	*********nbr = 42;
}
//apagar
int main(void)
{
	int a = 0;
	int *p = &a;
	int **p2 = &p;
	int ***p3 = &p2;
	int ****p4 = &p3;
	int *****p5 = &p4;
	int ******p6 = &p5;
	int *******p7 = &p6;
	int ********p8 = &p7;
	
	ft_ultimate_ft(&p8);
	printf("%d ", a);
}
