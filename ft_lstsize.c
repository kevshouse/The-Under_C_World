/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: keanders <keanders@student.42london.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/02 15:19:09 by keanders          #+#    #+#             */
/*   Updated: 2025/01/02 15:20:19 by keanders         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list	*lst)
{
	int		node_count;

	node_count = 0;
	while (lst)
	{
		if (node_count == 2147483647)
		{
			return (-1);
		}
		node_count++;
		lst = lst->next;
	}
	return (node_count);
}
