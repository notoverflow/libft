/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oliradet <oliradet@student.42perpignan.f>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 17:34:49 by oliradet          #+#    #+#             */
/*   Updated: 2023/10/17 17:34:49 by oliradet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_split(char const *s, char c)
{
	char	**tab;
	int		i;
	int		j;
	int		n;

	if (!s)
		return (NULL);
	tab = malloc(sizeof(char *) * (ft_strlen((char *)s) + 1));
	if (!tab)
		return (NULL);
	i = 0;
	j = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		n = i;
		while (s[i] && s[i] != c)
			i++;
		if (i > n)
			tab[j++] = ft_substr(s, n, i - n);
	}
	tab[j] = NULL;
	return (tab);
}
