/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: keanders <keanders@student.42london.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 16:27:52 by keanders          #+#    #+#             */
/*   Updated: 2025/01/02 11:57:51 by keanders         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		len_str;
	int		place;

	len_str = ft_strlen(s);
	place = len_str;
	while (place >= 0)
	{
		if (s[place] == (unsigned char)c)
		{
			return ((char *)&s[place]);
		}
		place--;
	}
	return (NULL);
}
