/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: keanders <keanders@student.42london.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/02 14:51:04 by keanders          #+#    #+#             */
/*   Updated: 2025/01/02 15:59:51 by keanders         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	move_forward(char **d, const char **s, size_t *n)
{
	while (*n > 0)
	{
		**d = **s;
		(*d)++;
		(*s)++;
		(*n)--;
	}
}

static void	move_backward(char **d, const char **s, size_t *n)
{
	*s += *n;
	*d += *n;
	while (*n > 0)
	{
		(*d)--;
		(*s)--;
		**d = **s;
		(*n)--;
	}
}

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	char		*d;
	const char	*s = (const char *)src;

	d = (char *)dst;
	if (d == s || n == 0)
	{
		return (dst);
	}
	if (d < s)
	{
		move_forward(&d, &s, &n);
		return (dst);
	}
	else
	{
		move_backward(&d, &s, &n);
	}
	return (dst);
}
