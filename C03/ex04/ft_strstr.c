/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agalysta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 15:18:51 by agalysta          #+#    #+#             */
/*   Updated: 2024/02/22 17:01:41 by agalysta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	if (to_find[0] == '\0')
	{
		return (str);
	}
	while (str[i] != '\0')
	{
		j = 0;
		while (str[i + j] == to_find[j])
		{
			if (to_find[j + 1] == '\0')
			{
				return (str + i);
			}
			j++;
		}
		i++;
	}
	return (0);
}
/*
int main()
{
    char main_string[20] = "I love pasta so much";
    char search_string[20] = "pasta";
    char *found_string = ft_strstr(main_string, search_string);

    if(found_string == NULL)
    {
	    printf("substring not found in the sring\n");
    }
    else
    {
	    printf("Substring found %s\n", found_string);
    }
    return (0);
}
*/
