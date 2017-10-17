/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rb_dup.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npineau <npineau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/23 09:40:33 by npineau           #+#    #+#             */
/*   Updated: 2017/10/17 15:10:38 by npineau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	rb_dup(t_rb const src, t_rb *slot)
{
	int	rv;

	rv = 0;
	slot->b_start = ft_memdup(src.b_start, src.esize * src.capacity);
	if (slot->b_start == NULL)
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
		slot->b_end = src.b_end;
		rv = 1;
	}
	return (rv);
}
