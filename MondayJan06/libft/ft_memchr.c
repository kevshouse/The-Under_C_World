/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: keanders <keanders@student.42london.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/02 15:06:48 by keanders          #+#    #+#             */
/*   Updated: 2025/01/02 15:07:27 by keanders         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t				i;
	unsigned char		uns_c;
	const unsigned char	*buff;

	uns_c = (unsigned char)c;
	buff = (const unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (buff[i] == uns_c)
		{
			return ((void *)(buff + i));
		}
		i++;
	}
	return (NULL);
}
