/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: keanders <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/20 13:09:12 by keanders          #+#    #+#             */
/*   Updated: 2024/12/20 13:09:17 by keanders         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*ptr;
	int		i;

	i = 0;
	ptr = (unsigned char *)s;
	while (i < n)
	{
		ptr[i] = 0;
		i++;
	}
}
*/

#include "libft.h"

void	ft_bzero(void	*s,	size_t	n)
{
	unsigned char	*ptr;

	*ptr = (unsigned char *)s;
	if (n > 0)
	{
		while (n--)
		{
			*ptr++ = 0;
		}
	}
}
