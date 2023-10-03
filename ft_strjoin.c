/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oliradet <oliradet@student.42perpignan.f>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 10:51:42 by oliradet          #+#    #+#             */
/*   Updated: 2023/10/03 10:51:42 by oliradet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

int	ft_count_tab_size(int size, char **strs)
{
	int	i;
	int	r;

	i = 0;
	r = 0;
	while (i < size)
	{
		r += ft_strlen(strs[i]);
		i++;
	}
	return (r);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	destlen;

	i = 0;
	destlen = ft_strlen(dest);
	while (src[i])
	{
		dest[destlen + i] = src[i];
		i++;
	}
	dest[destlen + i] = '\0';
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*str;
	int		s;
	int		i;

	s = 0;
	i = 0;
	if (size == 0)
		s = 1;
	else
		s = count_tab_size(size, strs) + ((size - 1) * ft_strlen(sep)) + 1;
	str = malloc(s * sizeof(char));
	if (!str)
		return (NULL);
	*str = '\0';
	if (size == 0)
		return (str);
	while (i < size)
	{
		ft_strcat(str, strs[i]);
		if (i != size - 1)
			ft_strcat(str, sep);
		i++;
	}
	return (str);
}
