/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agalysta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 21:10:06 by agalysta          #+#    #+#             */
/*   Updated: 2024/02/18 21:35:40 by agalysta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_str_is_alpha(char *str)
{
	if (*str == '\0')
		return (1);
	while (*str != '\0')
	{
		if ((*str < 'A' || *str > 'Z') && (*str < 'a' || *str > 'z'))
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
	char string1[] = "HelloWorld";
	char string2[] = "Hello10";
	char string3[] = "";

	printf("String : %s is %d\n", string1, ft_str_is_alpha(string1));
	printf("String : %s is %d\n", string2, ft_str_is_alpha(string2));
	printf("String : %s is %d\n", string3, ft_str_is_alpha(string3));

	return (0);
}
*/
