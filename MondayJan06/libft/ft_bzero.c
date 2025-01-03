/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: keanders <keanders@student.42london.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/20 13:09:12 by keanders          #+#    #+#             */
/*   Updated: 2025/01/02 16:04:11 by keanders         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void	*s,	size_t	n)
{
	unsigned char	*ptr;

	ptr = (unsigned char *)s;
	if (n > 0)
	{
		while (n--)
		{
			*ptr++ = 0;
		}
	}
}
