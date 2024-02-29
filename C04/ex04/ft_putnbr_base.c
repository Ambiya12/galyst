/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agalysta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 17:06:07 by agalysta          #+#    #+#             */
/*   Updated: 2024/02/26 19:22:10 by agalysta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	is_valide_base(char *str)
{
	int	i;
	int	j;
	int	x;

	x = ft_strlen(str);
	i = 0;
	if (str[0] == '\0' || x == 1)
		return (0);
	while (str[i] != '\0')
	{
		if (str[i] <= 32 || str[i] == 127 || str[i] == 43 || str[i] == 45)
			return (0);
		j = i + 1;
		while (j < ft_strlen(str))
		{
			if (str[i] == str[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	len;
	int	valide_base;
	int	nb;

	vaide_base = is_valide_base(base);
	len = ft_strlen(base);
	nb = nbr;
	if (error == 1)
	{
		if (nb < 0)
		{
			ft_putchar('-');
			nb *= -1;
		}
		if (nb < len)
		{
			ft_putchar(base[nb]);
		}
		if (nb >= len)
		{
			ft_putnbr_base(nb / len, base);
			ft_putnbr_base(nb % len, base);
		}
	}
}
/*
int main()
{
    char binary_base[] = "01";
    char decimal_base[] = "0123456789";
    char hex_base[] = "0123456789ABCDEF";
    char octal_base[] = "01234567";

    int number = -123;

    ft_putnbr_base(number, binary_base);
    write(1, "\n", 1);
    ft_putnbr_base(number, decimal_base);
    write(1, "\n", 1);
    ft_putnbr_base(number, hex_base);
    write(1, "\n", 1);
    ft_putnbr_base(number, octal_base);
    write(1, "\n", 1);
    return 0;
}
*/
