/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rb_dup.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npineau <npineau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/23 09:40:33 by npineau           #+#    #+#             */
/*   Updated: 2015/06/02 17:03:23 by npineau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	rb_dup(t_rb const src, t_rb *slot)
{
	int	rv;

	rv = 0;
	slot->buffer = ft_memdup(src.buffer, src.esize * src.capacity);
	if (slot->buffer == NULL)
	{
		ft_bzero(slot, sizeof(t_rb));
	}
	else
	{
		slot->capacity = src.capacity;
		slot->esize = src.esize;
		slot->used = src.used;
		slot->head = src.head;
		slot->tail = src.tail;
		rv = 1;
	}
	return (rv);
}
