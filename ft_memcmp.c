/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lserghin <lserghin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 12:11:04 by lserghin          #+#    #+#             */
/*   Updated: 2024/11/06 15:00:20 by lserghin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*variant_s1;
	unsigned char	*variant_s2;

	variant_s1 = (unsigned char *)s1;
	variant_s2 = (unsigned char *)s2;
	while (n--)
	{
		if (*variant_s1 != *variant_s2)
			return (*variant_s1 - *variant_s2);
		variant_s1++;
		variant_s2++;
	}
	return (0);
}
