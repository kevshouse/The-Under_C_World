/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: keanders <keanders@student.42london.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/20 14:28:49 by keanders          #+#    #+#             */
/*   Updated: 2025/01/02 18:01:35 by keanders         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	void	*safe_malloc(size_t size)
{
	void	*ptr;

	ptr = malloc(size);
	if (ptr == NULL)
	{
		return (NULL);
	}
	return (ptr);
}

void	*ft_calloc(size_t count, size_t size)
{
	size_t		size_total;
	void		*ptr;

	if (size && count > SIZE_MAX / size)
		return (NULL);
	size_total = size * count;
	if (size_total == 0)
		size_total = 1;
	ptr = safe_malloc(size_total);
	if (ptr == NULL )
		return (ptr);
	ft_bzero(ptr, size_total);
	return (ptr);
}
