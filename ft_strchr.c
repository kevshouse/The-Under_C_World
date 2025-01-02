/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: keanders <keanders@student.42london.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 16:27:52 by keanders          #+#    #+#             */
/*   Updated: 2025/01/02 13:15:56 by keanders         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *s, int c)
{
	char	target;

	target = (char)c;
	while (*s != '\0')
	{
		if (*s == target)
		{
			return ((char *)s);
		}
		s++;
	}
	if (*s == target)
	{
		return ((char *)s);
	}
	return ((char *)0);
}
