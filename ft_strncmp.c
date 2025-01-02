/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: keanders <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/02 11:43:51 by keanders          #+#    #+#             */
/*   Updated: 2025/01/02 11:43:54 by keanders         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *str1, const char *str2, size_t n)
{
	size_t		i;

	i = 0;
	while (i < n)
	{
		if (str1[i] != str2[i])
		{
			return ((unsigned char) str1[i]
				-(unsigned char) str2[i]);
		}
		if (str1[i] == '\0')
		{
			return (0);
		}
		i++;
	}
	return (0);
}
