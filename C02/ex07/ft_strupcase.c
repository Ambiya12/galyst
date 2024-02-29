/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agalysta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 22:56:22 by agalysta          #+#    #+#             */
/*   Updated: 2024/02/18 21:51:05 by agalysta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strupcase(char *str)
{
	char	*original;

	original = str;
	while (*str != '\0')
	{
		if (*str >= 'a' && *str <= 'z')
		{
			*str = *str - ('a' - 'A');
		}
		str++;
	}
	return (original);
}
/*
int main()
{
    char string[] = "Hello World!";

    printf("Original string: %s\n", string);
    char *result = ft_strupcase(string);
    printf("Uppercase string: %s\n", result);

    return 0;
}
*/
