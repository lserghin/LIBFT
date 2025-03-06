/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lserghin <lserghin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 11:50:30 by lserghin          #+#    #+#             */
/*   Updated: 2024/11/04 13:01:25 by lserghin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*variant_s;

	variant_s = (unsigned char *)s;
	while (n--)
		*variant_s++ = (unsigned char)c;
	return (s);
}
