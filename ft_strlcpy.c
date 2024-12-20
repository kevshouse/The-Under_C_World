/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: keanders <keanders@student.42london.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 15:28:01 by keanders          #+#    #+#             */
/*   Updated: 2024/12/20 14:52:55 by keanders         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
size_t  ft_strlcpy(char *dest, const char *src, size_t size)
{
        size_t src_len = 0;
        size_t cpy_len;

    // Calculate the length of the source string
    while (src[src_len] != '\0')
    {
        src_len++;
    }

    // Calculate the number of characters to copy
    if (size > 0)
    {
        // Ensure we do not copy more than the size - 1
        cpy_len = (src_len >= size) ? size - 1 : src_len;
        // Copy the characters from src to dest
        size_t i;
        for (i = 0; i < cpy_len; i++)
        {
            dest[i] = src[i];
        }
        // Null-terminate the destination string
        dest[cpy_len] = '\0';
    }
    return src_len; // Return the length of the source string
}*/
#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	src_len;
	size_t	cpy_len;
	size_t	i;

	src_len = 0;
	while (src[src_len] != '\0')
	{
		src_len++;
		if (size > 0)
		{
			if (src_len >= size)
			{
				cpy_len = size -1;
			}
			else
			{
				cpy_len = src_len;
			}
			while (i < cpy_len)
				dest[i] = src[i];
			dest[cpy_len] = '\0';
		}
	}
	return (src_len);
}
