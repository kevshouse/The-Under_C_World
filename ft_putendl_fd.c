/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: keanders <keanders@student.42london.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/02 14:49:50 by keanders          #+#    #+#             */
/*   Updated: 2025/01/02 14:55:45 by keanders         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Outputs the string 's' to the given file descriptor followed */
/* by a newline.                                               */
/***************************************************************/
#include <unistd.h>
#include <stdio.h>
#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	if (s)
	{
		ft_putstr_fd(s, fd);
	}
	ft_putchar_fd('\n', fd);
}
