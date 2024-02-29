/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agalysta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 15:33:13 by agalysta          #+#    #+#             */
/*   Updated: 2024/02/27 16:08:32 by agalysta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1)
}

int     main(int ac, char **av)
{
        int index;
        int index_char;

        if (ac < 2)
                return (0);
        index = 1;
        while (index < ac)
        {
                index_char = 0;
                while(av[index][index_char] != '\0')
                {
                        //write(1, av[index]++, 1);
                        ft_putchar(1, &av[index][index_char], 1);
                        index_char++;
                }
                ft_putchar(1, "\n", 1);
                index++;
        }
        return (0);
}

