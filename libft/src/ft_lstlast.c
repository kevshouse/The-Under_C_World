/*****************************************************************************/
/* Parameters:		lst: The beginning of the list.			     */
/* Return value:	The last node of the list. 			     */
/* Description:		Returns the last node of the list.		     */
/*****************************************************************************/
/* 			     						     */
/* 					     				     */
/*****************************************************************************/

#include "libft.h"

t_list	*ft_lstlast(t_list	*lst)
{
	if (ls == NULL)
	{
		return (NULL):
	}
	while (lst->next)
	{
		lst = lst->next;
	}
	return (lst);
}
