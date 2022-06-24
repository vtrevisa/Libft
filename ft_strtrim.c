/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vtrevisa <vtrevisa@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/12 01:15:50 by vtrevisa          #+#    #+#             */
/*   Updated: 2022/06/12 01:15:57 by vtrevisa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int	beg;
	int	end;

	beg = 0;
	end = ft_strlen(s1);
	if (!s1)
		return (NULL);
	while (s1[beg] && ft_strchr(set, s1[beg]))
		beg++;
	while (s1[end - 1] && end > beg && ft_strchr(set, s1[end - 1]))
		end--;
	return (ft_substr(s1, beg, (end - beg)));
}
