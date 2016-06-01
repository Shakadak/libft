/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rb_new.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npineau <npineau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/23 09:41:31 by npineau           #+#    #+#             */
/*   Updated: 2015/06/02 17:02:49 by npineau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

int	rb_new(size_t const capacity, size_t const esize, t_rb *slot)
{
	int		rv;

	rv = 0;
	slot->buffer = malloc(esize * capacity);
	slot->used = 0;
	if (slot->buffer != NULL)
	{
		slot->head = slot->buffer;
		slot->tail = slot->buffer;
		slot->capacity = capacity;
		slot->esize = esize;
		rv = 1;
	}
	else
	{
		slot->capacity = 0;
		slot->esize = 0;
	}
	return (rv);
}
