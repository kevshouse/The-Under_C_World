/**************************************************************************/
/* Parameters	content:	The content to create the node with.      */
/* Return value:		The new node.                             */
/* External functs:		malloc                                    */
/* Description:                                                           */
/* 	Allocates (with malloc(3)) and returns a new node.                */
/*	The member variable 'content' is initialised with the value of    */
/*	the parameter 'content'. The variable 'next' is initialised to    */
/*      NULL.								  */
/**************************************************************************/
/* declare a new list element */
/* allocate memory for it */
/* set the new element variables 
 * new->content = content
 * new->next = NULL
 */
/* return the new element */

#include "libft.h"

t_list	*ft_lstnew(void	*content)
{
	t_list *node;
	// allocate mem
	node = malloc(sizeof(t_list));
	// handle malloc failure
	if (!node)
		return (NULL);
	node->content = content;//Insert the data.
	node->next = NULL;// This a new list, so no next node.
	
	return (node);
}
