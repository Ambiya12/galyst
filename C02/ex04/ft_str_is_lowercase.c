/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agalysta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 21:59:53 by agalysta          #+#    #+#             */
/*   Updated: 2024/02/19 19:15:15 by agalysta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_str_is_lowercase(char *str)
{
	if (*str == '\0')
		return (1);
	while (*str != '\0')
	{
		if ((*str < 'a' || *str > 'z'))
		{
			return (0);
		}
		str++;
	}
	return (1);
}
/*
int	main()
{
	char string1[] = "helloworld";
	char string2[] = "Hello10";
	char string3[] = "HELLO";
	
	printf("String : %s is %d\n", string1, ft_str_is_lowercase(string1));
	printf("String : %s is %d\n", string2, ft_str_is_lowercase(string2));
	printf("String : %s is %d\n", string3, ft_str_is_lowercase(string3));
	
	return (0);
}
*/
