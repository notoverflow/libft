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

void c, void *dest, size_t n)
{
char	*src2;
char	*dest2;
size_t	i;

src2 = (char *) src;
dest2 = (char *) dest;
i = 0;
if (dest > src)
{
while (n > 0)
{
dest2[n] = src2[n];
n--;
}
