/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lserghin <lserghin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 10:43:42 by lserghin          #+#    #+#             */
/*   Updated: 2024/11/08 15:49:52 by lserghin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_nlen(int n)
{
	size_t	length;

	if (n <= 0)
		length = 1;
	else
		length = 0;
	while (n)
	{
		n /= 10;
		length++;
	}
	return (length);
}

char	*ft_itoa(int n)
{
	char			*str;
	unsigned int	un;
	size_t			nlen;

	nlen = ft_nlen(n);
	str = malloc(sizeof(char) * (nlen + 1));
	if (!str)
		return (NULL);
	*(str + ft_nlen(n)) = '\0';
	if (n == 0)
		*str = '0';
	if (n < 0)
	{
		*str = '-';
		un = -n;
	}
	else
		un = n;
	while (nlen-- && un)
	{
		*(str + nlen) = (un % 10) + '0';
		un /= 10;
	}
	return (str);
}
