/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vtrevisa <vtrevisa@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/12 01:13:09 by vtrevisa          #+#    #+#             */
/*   Updated: 2022/06/14 00:01:44 by vtrevisa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*str1;
	unsigned char	*str2;
	size_t			position;

	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	position = 0;
	if (n == 0)
		return (0);
	while (str1[position] == str2[position] && position < n)
	{
		position++;
	}
	if (position == n)
		return (0);
	else
		return ((unsigned char)str1[position] - (unsigned char)str2[position]);
}
