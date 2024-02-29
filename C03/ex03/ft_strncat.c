/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agalysta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 19:22:58 by agalysta          #+#    #+#             */
/*   Updated: 2024/02/22 16:47:04 by agalysta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	get_len(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	if (nb < 1)
	{
		return (dest);
	}
	i = 0;
	j = get_len(dest);
	while (src[i] != '\0' && i < nb)
	{
		dest[j + i] = src[i];
		i++;
	}
	dest[j + i] = '\0';
	return (dest);
}

/*
int main()
{
    char destination[15] = "Hello, ";
    char source[15] = "world!";
    unsigned int max_chars = 3;

    printf("Before concatenation: %s\n", destination);

    ft_strncat(destination, source, max_chars);

    printf("After concatenation: %s\n", destination);

    return 0;
}
*/
