/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agalysta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 12:56:26 by agalysta          #+#    #+#             */
/*   Updated: 2024/02/29 11:41:48 by agalysta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	swap;

	i = 0;
	while (i < size / 2)
	{
		swap = tab[i];
		tab[i] = tab[size - i - 1];
		tab[size - i - 1] = swap;
		i++;
	}
}
/*
int main(void)
{
        int tab[6] = {0, 1, 2, 3, 4, 5};
        int size = 6;
 
        ft_rev_int_tab(tab, size);
        printf("%d, %d, %d", tab[0], tab[3], tab[5]);
       return(0);
}
*/
