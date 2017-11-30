/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rb_new.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npineau <npineau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/23 09:41:31 by npineau           #+#    #+#             */
/*   Updated: 2017/11/30 10:47:15 by npineau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "inc/mem.h"
#include "inc/rb.h"

t_rb	rb_new(size_t const capacity, size_t const esize, t_rb *slot)
{
	t_rb	substitute;

	if (slot == NULL)
		slot = &substitute;
	if (capacity == 0 || esize == 0)
		return (*(t_rb *)mbzero(sizeof(t_rb), slot));
	slot->b_start = malloc(esize * capacity);
	slot->used = 0;
	if (slot->b_start != NULL)
	{
		ft_bzero(slot->b_start, esize * capacity);
		slot->head = slot->b_start;
		slot->tail = slot->b_start;
		slot->capacity = capacity;
		slot->esize = esize;
		slot->b_end = slot->b_start + (capacity - 1) * esize;
	}
	else
	{
		ft_bzero(slot, sizeof(t_rb));
	}
	return (*slot);
}

t_rb	rb_from(size_t capacity, size_t esize, void *xs)
{
	t_rb	new;

	rb_new(capacity, esize, &new);
	rb_push_back_n(&new, xs, capacity);
	return (new);
}
