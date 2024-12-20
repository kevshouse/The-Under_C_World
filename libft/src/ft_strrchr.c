/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: keanders <keanders@student.42london.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 16:27:52 by keanders          #+#    #+#             */
/*   Updated: 2024/12/02 17:10:45 by keanders         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		len_str;
	int		place;
	
	len_str = ft_strlen(s);
	place = len_str; // end of string
	while (place >= 0)
	{
		if (s[place] == (unsigned char)c) //compare
		{
			return ((char *)&s[place]);// return the address of found char.			
		}
		place--;
	}
	return (NULL); // NULL, if not found.
}
