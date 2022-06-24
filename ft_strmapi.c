/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vtrevisa <vtrevisa@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/12 01:15:14 by vtrevisa          #+#    #+#             */
/*   Updated: 2022/06/12 01:15:15 by vtrevisa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int				position;
	unsigned int	len;
	char			*res;

	position = 0;
	len = ft_strlen(s);
	res = malloc (len + 1);
	if (!res)
		return (NULL);
	while (s[position])
	{
		res[position] = ((*f)(position, s[position]));
		position++;
	}
	res[position] = 0;
	return (res);
}
