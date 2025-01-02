/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: keanders <keanders@student.42london.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/20 15:26:57 by keanders          #+#    #+#             */
/*   Updated: 2024/12/20 15:27:02 by keanders         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	*f is the address of a function.
	*s is the address of a string iteratr the function on.
	Returns: NULL if alloc fails.
		or string created from successive applications
		of 'f'.
		
	1. Allocate enough mem for proccess string and a Nul-term.
	2. Iterate on the input string, applying f on each char of s.
	
*/

#include "libft.h"

static void	*safe_malloc(size_t size)
{
	void	*ptr;

	ptr = malloc(size);
	if (ptr == NULL)
	{
		return (NULL);
	}
	return (ptr);
}

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*buffer;

	if (s == NULL || f == NULL)
		return (NULL);
	buffer = safe_malloc(ft_strlen(s) + 1);
	if (buffer == NULL)
		return (NULL);
	i = 0;
	while (i < ft_strlen(s))
	{
		buffer[i] = f(i, s[i]);
		i++;
	}
	buffer[i] = '\0';
	return (buffer);
}
