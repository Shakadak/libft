#include "inc/libft.h"

t_lst	*ft_lstind(t_lst *lst, size_t index)
{
	if (lst == NULL)
	{
		return (NULL);
	}
	else if (index == 0)
	{
		return (lst);
	}
	else
	{
		return (ft_lstind(lst->next, index - 1));
	}
}
