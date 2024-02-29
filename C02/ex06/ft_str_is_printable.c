/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agalysta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 22:20:43 by agalysta          #+#    #+#             */
/*   Updated: 2024/02/17 23:35:18 by agalysta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_str_is_printable(char *str)
{
	if (*str == '\0')
		return (1);
	while (*str != '\0')
	{
		if (*str < 32 || *str > 126)
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
        char string1[] = "hell oworld";
        char string2[] = "Hello\130";
        char string3[] = "";
        
        printf("String : %s is %d\n", string1, ft_str_is_printable(string1));
        printf("String : %s is %d\n", string2, ft_str_is_printable(string2));
        printf("String : %s is %d\n", string3, ft_str_is_printable(string3));
        
        return (0);
}
*/
