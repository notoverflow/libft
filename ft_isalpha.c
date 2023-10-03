/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oliradet <oliradet@student.42perpignan.f>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 16:16:23 by oliradet          #+#    #+#             */
/*   Updated: 2023/08/08 16:16:23 by oliradet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(char *str)
{
	char	*c;

	c = str;
	if (*str == '\0')
	{
		return (1);
	}
	while (*c != '\0')
	{
		if (*c < 65 || (*c > 90 && *c < 97) || *c > 122)
		{
			return (0);
		}
		c++;
	}
	return (1);
}
