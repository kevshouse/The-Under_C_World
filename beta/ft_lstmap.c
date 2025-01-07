/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: keanders <keanders@student.42london.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/02 15:26:49 by keanders          #+#    #+#             */
/*   Updated: 2025/01/02 15:27:17 by keanders         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/******************************************************************************/
/* Parameters:		lst: The address of a pointer to a node.		   */
/* 		 		f: The addess of the function used to iterate on      */
/* 		 		the list.					      */
/*			del: The address of the function used to delete the   */
/*				content of a node if needed.			      */
/* Return value:	None. 				 			      */
/* External functs:	malloc, free.						   */
/* Description:		Iterates the list 'lst'and applies the function		   */
/*                      'f' on the content of each node. Creates a new list   */
/*                      resulting of the successive applications of the       */
/*			function ´f'. The 'del' function is used to delete    */
/*			the content of a node if needed.			   */
/******************************************************************************/
/* Note: Function doesn´t know how 'del' works, we just del(node).		   */
/* Func doesn´t handle rewiring of the list, the caller must do that!         */
/* 							                           */
/******************************************************************************/

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_lst;
	t_list	*new_node;

	if (!lst)
		return (NULL);
	new_lst = NULL;
	while (lst)
	{
		if (f)
		{
			new_node = ft_lstnew(f(lst->content));
		}
		else
		{
			new_node = ft_lstnew(lst->content);
		}
		if (!new_node)
		{
			ft_lstclear(&new_lst, del);
			return (NULL);
		}
		ft_lstadd_back(&new_lst, new_node);
		lst = lst->next;
	}
	return (new_lst);
}
