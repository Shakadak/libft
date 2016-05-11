/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npineau <npineau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/30 16:48:17 by npineau           #+#    #+#             */
/*   Updated: 2015/01/06 17:37:12 by npineau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "list.h"

static void	ft_elemdel(void *content, size_t size)
{
	(void)size;
	free(content);
}

t_list		*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*new;
	t_list	*mod;

	new = NULL;
	if (lst)
	{
		mod = f(lst);
		if (mod)
		{
			new = ft_lstnew(mod->content, mod->content_size);
			if (!new)
				return (NULL);
			if (lst->next)
			{
				new->next = ft_lstmap(lst->next, f);
				if (new->next == NULL)
					ft_lstdel(&new, &ft_elemdel);
			}
		}
	}
	return (new);
}
