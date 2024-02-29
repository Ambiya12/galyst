/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agalysta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 12:22:53 by agalysta          #+#    #+#             */
/*   Updated: 2024/02/15 18:32:21 by agalysta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
int	main()
{
    int dividend = 20;
    int divisor = 3;
    int remainder;

    ft_div_mod(dividend, divisor, &remainder, &remainder);

    printf("Dividend: %d, Divisor: %d\n", dividend, divisor);
    printf("Remainder: %d\n", remainder);

    return 0;
}
*/
