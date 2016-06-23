/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npineau <npineau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/30 12:03:09 by npineau           #+#    #+#             */
/*   Updated: 2014/05/06 13:02:24 by npineau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "inc/lst.h"
#include "inc/mem.h"

t_lst	*ft_lstnew(const void *content, size_t content_size)
{
	t_lst	*new;

	new = (t_lst *)malloc(sizeof(t_lst));
	if (!new)
		return (NULL);
	ft_bzero(new, sizeof(new));
	if (content)
	{
		new->content = malloc(content_size);
		if (!new->content)
		{
			free(new);
			return (NULL);
		}
		new->content = ft_memcpy(new->content, content, content_size);
		new->content_size = content_size;
	}
	return (new);
}
