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
/*
 * Creates a new node for a linked list.
 * @param content: The content to be stored in the new node.
 * @return: A pointer to the new node, or NULL if memory allocation fails.
 */

#include "libft.h"

static void *safe_malloc(size_t size)
{
	void *ptr = malloc(size);
	if (ptr == NULL) 
		return(NULL);
	return ptr;
}

t_list	*ft_lstnew(void	*content)
{
	t_list *node;
	// allocate mem
	node = safe_malloc(sizeof(t_list));
	// handle malloc failure
	if (!node)
		return (NULL);
	/* Insert the data. */
	node->content = content;
	/* This a new list, so no next node.*/
	node->next = NULL;
	
	return (node);
}
