/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agalysta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 22:16:11 by agalysta          #+#    #+#             */
/*   Updated: 2024/02/19 21:32:28 by agalysta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_str_is_uppercase(char *str)
{
	if (*str == '\0')
		return (1);
	while (*str != '\0')
	{
		if ((*str < 'A' || *str > 'Z'))
		{
			return (0);
		}
		str++;
	}
	return (1);
}
/*
int     main()
{
        char string1[] = "hello";
        char string2[] = "Hello10";
        char string3[] = "HELLO";
        
        printf("String : %s is %d\n", string1, ft_str_is_uppercase(string1));
        printf("String : %s is %d\n", string2, ft_str_is_uppercase(string2));
        printf("String : %s is %d\n", string3, ft_str_is_uppercase(string3));
        
        return (0);
}
*/
