/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lserghin <lserghin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 16:03:50 by lserghin          #+#    #+#             */
/*   Updated: 2024/11/02 19:52:58 by lserghin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	srclen;
	size_t	size;

	srclen = ft_strlen(src);
	size = dstsize - 1;
	if (dstsize == 0)
		return (srclen);
	while (*src && size--)
		*dst++ = *src++;
	*dst = '\0';
	return (srclen);
}
