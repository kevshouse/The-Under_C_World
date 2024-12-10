/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: keanders <keanders@student.42london.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 11:34:19 by keanders          #+#    #+#             */
/*   Updated: 2024/12/10 12:18:15 by keanders         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h> // for malloc and calloc
#include <string.h> // for strlen and strncpy

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	s_len;
	size_t	actual_len;
	char	*substr;

	s_len = ft_strlen(s);
	if (!s || start >= ft_strlen(s))
	{
		return ((char *)ft_calloc(1, sizeof(char)));
	}
	if (s_len - start < len)
	{
		actual_len = s_len - start;
	}
	else
	{
		actual_len = len;
	}
	substr = (char *)malloc(actual_len + 1);
	if (!substr)
	{
		return (NULL);
	}
	ft_strncpy(substr, s + start, actual_len);
	substr[actual_len] = '\0';
	return (substr);
}
