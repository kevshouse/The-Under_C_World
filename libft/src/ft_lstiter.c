/******************************************************************************/
/* Parameters:		lst: The address of a pointer to a node.	      */
/* 	    		f: The addess of the function used to iterate on      */
/* 	    		the list.	     				      */
/* Return value:	None. 			    			      */
/* External functs:	None.						      */
/* Description:		Iterates the list 'lst'and applies the function	      */
/*                      'f' on the content of each node.		      */
/******************************************************************************/
/* Note: Function doesn´t know how 'del' works, we just del(node).	      */
/* Func doesn´t handle rewiring of the list, the caller must do that!         */
/* Same with 'f'.						                              */
/******************************************************************************/
#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *)
{
	if (!lst||!f)
		return;
	while (lst !=NULL)
	{
		f(lsr->content);
		lst = lst->next;	
	}
	
}
