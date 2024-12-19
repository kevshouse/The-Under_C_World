#include "ftlib.h"

void ft_lstadd_back(t_list **lst, t_list *new)
{	
	t_list	*existing;
	
	if (!new)// Do nothing on NULL nodes
		return;
	if (*lst ==NULL)
	{// On empty set new head node as head
		*lst = new
	}
	else
	{// Start at head node
		existing = *lst;
		while (existing->next)
		{
			existing = existing->next; // List traversal
		}
		// link new node to last existing node.
		existing->next = new;
	}
}
