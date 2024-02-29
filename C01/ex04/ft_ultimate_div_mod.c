/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agalysta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 14:13:42 by agalysta          #+#    #+#             */
/*   Updated: 2024/02/15 18:35:17 by agalysta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	temp_a;

	temp_a = *a;
	*a = temp_a / (*b);
	*b = temp_a % (*b);
}
/*
int main()
{
    int dividend = 20;
    int divisor = 3;

    ft_ultimate_div_mod(&dividend, &divisor);

    printf("Quotient = %d, Remainder = %d\n", dividend, divisor);

    return 0;
}
*/
