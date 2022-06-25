/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vitor <vitor@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/12 01:04:19 by vtrevisa          #+#    #+#             */
/*   Updated: 2022/06/25 15:26:39 by vitor            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{	
	int		*ptr;
	size_t	teste;

	teste = (nmemb * size);
	if (nmemb <= 0 || size <= 0)
		return (0);
	if (nmemb != (teste / size))
		return (NULL);
	ptr = (int *)malloc (nmemb * size);
	if (ptr)
		ft_bzero(ptr, nmemb * size);
	return (ptr);
}
