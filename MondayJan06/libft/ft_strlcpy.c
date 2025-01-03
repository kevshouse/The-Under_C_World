/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: keanders <keanders@student.42london.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 15:28:01 by keanders          #+#    #+#             */
/*   Updated: 2025/01/02 16:43:17 by keanders         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	src_len;
	size_t	cpy_len;
	size_t	i;

	src_len = 0;
	cpy_len = 0;
	i = 0;
	while (src[src_len] != '\0')
	{
		src_len++;
	}
	if (size > 0)
	{
		if (src_len >= size)
			cpy_len = size - 1;
		else
			cpy_len = src_len;
		while (i < cpy_len)
		{
			dest[i] = src[i];
			i++;
		}
		dest[cpy_len] = '\0';
	}
	return (src_len);
}
