/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lserghin <lserghin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 14:48:41 by lserghin          #+#    #+#             */
/*   Updated: 2024/11/05 16:45:44 by lserghin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strchr(const char *s, int c)
{
	char	*variant_s;

	variant_s = (char *)s;
	while (*variant_s)
	{
		if (*variant_s == (char)c)
			return (variant_s);
		variant_s++;
	}
	if (*variant_s == (char)c)
		return (variant_s);
	return (NULL);
}
