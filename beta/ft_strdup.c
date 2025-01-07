/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: keanders <keanders@student.42london.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/02 13:13:20 by keanders          #+#    #+#             */
/*   Updated: 2025/01/02 13:15:16 by keanders         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	*safe_malloc(size_t size)
{
	void	*ptr;

	ptr = malloc(size);
	if (ptr == NULL)
		return (NULL);
	return (ptr);
}

char	*ft_strdup(const char *s)
{
	size_t		buffer_size;
	char		*ptr;

	buffer_size = ft_strlen(s)+1;
	ptr = safe_malloc(buffer_size);
	if (ptr == NULL)
		return (NULL);
	ft_strlcpy(ptr, s, buffer_size);
	return (ptr);
}
