/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vtrevisa <vtrevisa@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/12 01:07:35 by vtrevisa          #+#    #+#             */
/*   Updated: 2022/06/15 02:59:02 by vtrevisa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	ft_countdigit(int n)
{
	int	nb;
	int	result;

	nb = n;
	result = 0;
	if (n < 0)
	{
		nb *= -1;
		result++;
	}
	while (nb >= 10)
	{
		nb = nb / 10;
		result++;
	}
	if (nb < 10)
		result++;
	return (result);
}

void	makestr(int n, char *str, int position)
{
	if (n < 0)
	{
		str[0] = '-';
		n *= -1;
	}
	str[position + 1] = 0;
	while (n >= 10)
	{
		str[position--] = (n % 10) + 48;
		n /= 10;
	}
	str[position--] = n + 48;
}

char	*ft_itoa(int n)
{	
	char	*str;
	int		dig;
	int		position;

	if (n == -2147483648)
		return (ft_strdup ("-2147483648"));
	dig = ft_countdigit(n);
	str = malloc (dig + 1);
	if (!str)
		return (NULL);
	position = dig - 1;
	makestr(n, str, position);
	return (str);
}
