/******************************************************************************/
/* Parameters:		lst: The node to free.				      */
/* 	    		del: The addess of the function used to delete	      */
/* 	    		the content.	     				      */
/* Return value:	None. 			    			      */
/* External functs:	free.						      */
/* Description:		Returns the last node of the list.		      */
/* 			    						      */
/******************************************************************************/
/* Note: Function doesn´t know how 'del' works, we just del(lst->content).    */
/* Func doesn´t handle rewiring of the list, the caller must do that!         */
/* 						                              */
/******************************************************************************/

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst || !del)
		return;
	del(lst->content);
	free(lst);
}
