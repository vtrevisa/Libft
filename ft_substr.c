/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vtrevisa <vtrevisa@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/12 01:16:08 by vtrevisa          #+#    #+#             */
/*   Updated: 2022/06/14 23:47:15 by vtrevisa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	l_s;
	size_t	l_str;

	l_s = ft_strlen(s);
	if (start > l_s)
	{	
		l_str = 1;
		start = l_s;
	}
	else if (len > l_s)
		l_str = l_s + 1;
	else if (start + len > l_s)
		l_str = (len - start) + 1;
	else
	{	
		l_str = len + 1;
	}
	str = malloc (l_str);
	if (!str)
		return (NULL);
	ft_strlcpy(str, s + start, l_str);
	return (str);
}
