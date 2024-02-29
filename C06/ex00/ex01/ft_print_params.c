/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agalysta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 14:14:36 by agalysta          #+#    #+#             */
/*   Updated: 2024/02/27 17:24:34 by agalysta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int argc, char **argv)
{
	int	index;
	int	index_char;

	index = 1;
	if (argc > 1)
	{
		while (index < argc)
		{
			index_char = 0;
			while (argv[index][index_char] != '\0')
			{
				ft_putchar(argv[index][index_char]);
				index_char++;
			}
			index++;
			ft_putchar('\n');
		}
	}
	return (0);
}
