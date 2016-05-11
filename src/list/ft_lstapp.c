#include "list.h"

void	ft_lstapp(t_list *lst, t_list *node)
{
	if (lst)
	{
		if (!lst->next)
		{
			lst->next = node;
		}
		else
		{
			ft_lstapp(lst->next, node);
		}
	}
}
