/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rb_new.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npineau <npineau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/23 09:41:31 by npineau           #+#    #+#             */
/*   Updated: 2017/10/17 15:12:14 by npineau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

int	rb_new(size_t const capacity, size_t const esize, t_rb *slot)
{
	int		rv;

	rv = 0;
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
		rv = 1;
	}
	else
	{
		ft_bzero(slot, sizeof(t_rb));
	}
	return (rv);
}
