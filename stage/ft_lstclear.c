/******************************************************************************/
/* Parameters:		lst: The address of a pointer to a node.	      */
/* 	    		del: The addess of the function used to delete	      */
/* 	    		the content.	     				      */
/* Return value:	None. 			    			      */
/* External functs:	free.						      */
/* Description:		Deletes & frees the given node & every successor of   */
/*                      that node, using 'del' & free(3). Finally, the pointer*/
/*                      to the list must be set to NULL.		      */
/******************************************************************************/
/* Note: Function doesn´t know how 'del' works, we just del(node).	      */
/* Func doesn´t handle rewiring of the list, the caller must do that!         */
/* 						                              */
/******************************************************************************/
/* Alternative form:							      */
/* void ft_lstclear(t_list ** lst, void (*del)(void *))			      */	
/* {			    						      */
/*	t_list	*current;						      */
/*	t_list	tmp;							      */
/*	if (!lst || !del)						      */
/*		return;							      */
/*	current = *lst;							      */
/*	while (current)							      */
/*	{			  					      */
/*		tmp = current;						      */
/*		current = current->next;				      */
/*		ft_delone(lst, del);					      */
/*	}								      */
/*	*lst = NULL;							      */
/*	return;						 		      */
/* }								      	      */
/* 						                              */
/******************************************************************************/

#include "libft.h"

void ft_lstclear(t_list ** lst, void (*del)(void *))
{
	t_list	*current;
	t_list	*tmp;
	if (!lst || !*lst || !del)
		return;
	current = *lst;
	while (current)
	{
		tmp = current;
		current = current->next;
		/* Could remove next 2 lines and use instead. */
		del(tmp->content);
		free(tmp);
	}
	*lst = NULL;
}
