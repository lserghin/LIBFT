/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lserghin <lserghin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 14:47:16 by lserghin          #+#    #+#             */
/*   Updated: 2024/11/06 15:05:00 by lserghin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *str)
{
	char	*variant_s;

	variant_s = (char *)str;
	while (*variant_s)
		variant_s++;
	return ((size_t)(variant_s - str));
}
