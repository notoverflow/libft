/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oliradet <oliradet@student.42perpignan.f>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 17:05:30 by oliradet          #+#    #+#             */
/*   Updated: 2023/10/03 17:05:30 by oliradet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(char *str, char *to_find, size_t len)
{
	char	*ptr;
	char	*tf;

	if (len > 0)
	{
		tf = to_find;
		if (!*to_find)
			return (str);
		while (1 == 1)
		{
			if (*str == '\0')
				return ((void *) 0);
			ptr = str;
			to_find = tf;
			while (*ptr == *to_find && *to_find != 0)
			{
				ptr++;
				to_find++;
			}
			if (*to_find == '\0')
				return (str);
			str++;
		}
	}
	return (NULL);
}
