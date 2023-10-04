/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oliradet <oliradet@student.42perpignan.f>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 13:40:50 by oliradet          #+#    #+#             */
/*   Updated: 2023/10/04 13:40:50 by oliradet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	int		i;

	str = malloc(len);
	if (str == NULL)
	{
		return (NULL);
	}
	while (i < len)
	{
		str[i] = s[i + start];
		i++;
	}
	return (str);
}
