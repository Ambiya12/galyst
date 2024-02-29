/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agalysta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 11:53:56 by agalysta          #+#    #+#             */
/*   Updated: 2024/02/15 14:21:14 by agalysta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
/*
int	main()
{
	int num1 = 10;
	int num2 = 20;

	printf("Avant le swap: num1 = %d, num2 = %d\n", num1, num2);

	ft_swap(&num1, &num2);

	printf("After swap: num1 = %d, num2 = %d\n", num1, num2);

	return (0);
}
*/
