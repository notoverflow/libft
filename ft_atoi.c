/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oliradet <oliradet@student.42perpignan.f>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 06:23:50 by oliradet          #+#    #+#             */
/*   Updated: 2023/10/03 06:23:50 by oliradet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(char *str)
{
	int	res;
	int	sign;

	sign = 1;
	res = 0;
	while ((*str >= 7 && *str <= 13) || *str == ' ')
	{
		str++;
	}
	if (*str == 45 || *str == 43)
	{
		if (*str == 45)
			sign *= -1;
		str++;
	}
	if (*str == 45 || *str == 43)
		return (0);
	while (*str >= 48 && *str <= 57)
	{
		res = 10 * res + *str - 48;
		str++;
	}
	res = res * sign;
	return (res);
}
