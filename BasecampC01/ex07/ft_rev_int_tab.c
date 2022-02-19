/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paregina <paregina@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 22:20:44 by paregina          #+#    #+#             */
/*   Updated: 2022/02/14 20:04:18 by paregina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//apagar
#include <stdio.h>
void ft_rev_int_tab(int *tab, int size)
{
	int x;
	int i;
	
	i = -1;
	
	while(++i < --size)
	{
		x = tab[i];
	   tab[i] = tab[size];
	    tab[size] = x;
		
	}
	
	
}

//apagar
int main (void)
{
	int tab[] = {1,2,3,4,5};
	int size  = 5;
	int i = 0;
	
	ft_rev_int_tab(tab, size);
	
	while(i < size)
	{
		printf("%d ", tab[i]);
		i ++;
	}
	
}