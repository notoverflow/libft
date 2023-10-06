/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oliradet <oliradet@student.42perpignan.f>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 13:36:40 by oliradet          #+#    #+#             */
/*   Updated: 2023/10/03 13:36:40 by oliradet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *src, void *dest, size_t n)
{
	char	*src2;
	char	*dest2;

	src2 = (char *) src;
	dest2 = (char *) dest;
	if (dest > src)
	{
		while (n > 0)
		{
			dest2[n] = src2[n];
			n--;
		}
	}
	return (dest);
}
