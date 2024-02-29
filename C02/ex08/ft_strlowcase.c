/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agalysta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 23:10:43 by agalysta          #+#    #+#             */
/*   Updated: 2024/02/19 21:34:19 by agalysta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	char	*original;

	original = str;
	while (*str != '\0')
	{
		if (*str >= 'A' && *str <= 'Z')
		{
			*str = *str - ('A' - 'a');
		}
		str++;
	}
	return (original);
}
/*
int main()
{
	char string[] = "hELLO wORLD";
	printf("Original string: %s\n", string);
	char *result = ft_strlowcase(string);
	printf("Lowercase string: %s\n", result);

	return (0);
}
*/
