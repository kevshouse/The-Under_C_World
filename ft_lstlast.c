/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: keanders <keanders@student.42london.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/02 15:28:29 by keanders          #+#    #+#             */
/*   Updated: 2025/01/02 15:28:57 by keanders         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*****************************************************************************/
/* Parameters:		lst: The beginning of the list.				  */
/* Return value:	The last node of the list. 				  */
/* Description:		Returns the last node of the list.			  */
/*****************************************************************************/
/* 				  						     */
/* 						  				     */
/*****************************************************************************/

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (lst == NULL)
		return (NULL);
	while (lst->next)
		lst = lst->next;
	return (lst);
}
