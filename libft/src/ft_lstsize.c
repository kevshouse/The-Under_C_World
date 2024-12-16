/*****************************************************************************/
/* Parameters:		lst: The beginning of the list.			     */
/* Return value:	The length of the list. 			     */
/* Description:		Counts the number of nodes in a list.		     */
/*****************************************************************************/
/* I have included a check of INT_MAX overflow.				     */
/* I'm not certain this is reqiured.					     */
/*****************************************************************************/
#include "libft.h"

int		ft_lstsize(t_list	*lst)
{
	int		node_count;
	
	node_count = 0;
	while (lst)
	{	
		if (node_count == 2147483647)
		{
			return (-1); // Overflow
		}
		node_count++;
		lst = lst->next;
	}
	return (node_count);
}
