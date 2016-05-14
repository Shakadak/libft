/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst2arr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npineau <npineau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/14 14:30:24 by npineau           #+#    #+#             */
/*   Updated: 2016/05/14 14:30:26 by npineau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list.h"
#include "arr.h"
#include "mem.h"

t_arr	*ft_lst2arr(const t_list *lst)
{
	t_arr	*arr;
	t_list	*l;
	size_t	i;

	arr = ft_arrnew(ft_lstlen(lst));
	if (arr)
	{
		i = 0;
		l = (t_list *)lst;
		while (l)
		{
			arr[i].content = ft_memdup(l->content, l->content_size);
			arr[i].size = l->content_size;
			l = l->next;
		}
	}
	return (arr);
}
