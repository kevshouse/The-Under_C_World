/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: keanders <keanders@student.42london.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/02 12:35:13 by keanders          #+#    #+#             */
/*   Updated: 2025/01/02 12:55:37 by keanders         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t		len_src;
	size_t		len_dst;
	size_t		max_cpy;

	len_src = ft_strlen(src);
	len_dst = ft_strlen(dst);
	if (dstsize == 0)
		return (len_src);
	if (len_dst >= dstsize)
		return (dstsize + len_src);
	max_cpy = dstsize - len_dst - 1;
	ft_strlcpy(dst + len_dst, src, max_cpy +1);
	return (len_dst + len_src);
}
