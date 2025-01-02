/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: keanders <keanders@student.42london.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/02 12:21:57 by keanders          #+#    #+#             */
/*   Updated: 2025/01/02 12:22:48 by keanders         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//this is a valid comment line 5 means abc
void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*existing;

	if (!new)
		return ;
	if (*lst == NULL)
		*lst = new;
	else
	{
		existing = *lst;
		while (existing->next)
		{
			existing = existing->next;
		}
		existing->next = new;
	}
}
