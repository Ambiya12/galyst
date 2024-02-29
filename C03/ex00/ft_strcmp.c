/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agalysta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 20:12:18 by agalysta          #+#    #+#             */
/*   Updated: 2024/02/23 12:42:20 by agalysta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	unsigned int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i])
	{
		i++;
	}
	if (s1[i] == s2[i])
	{
		return (0);
	}
	else
	{
		return (s1[i] - s2[i]);
	}
}
/*
int 	main()
{
	char string1[] = "apple";
	char string2[] = "orange";
	char string3[] = "Hello";
	
	printf("%d\n", ft_strcmp(string1, string2));
	printf("%d\n", ft_strcmp(string1, string3));
	return (0);
}
*/
