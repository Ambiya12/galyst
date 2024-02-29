/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agalysta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 21:37:13 by agalysta          #+#    #+#             */
/*   Updated: 2024/02/18 21:34:57 by agalysta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_str_is_numeric(char *str)
{
	if (*str == '\0')
		return (1);
	while (*str != '\0')
	{
		if ((*str < '0') || (*str > '9'))
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
        char string1[] = "120901";
        char string2[] = "hello";
        char string3[] = "";

        printf("String : %s is %d\n", string1, ft_str_is_numeric(string1));
        printf("String : %s is %d\n", string2, ft_str_is_numeric(string2));
        printf("String : %s is %d\n", string3, ft_str_is_numeric(string3));

        return (0);
}
*/
