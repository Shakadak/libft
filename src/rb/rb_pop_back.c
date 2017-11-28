/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rb_pop_back.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npineau <npineau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/17 14:29:47 by npineau           #+#    #+#             */
/*   Updated: 2017/11/28 15:36:29 by npineau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc/rb.h"

static void	*mmemcpy(void *out, const void *in, size_t len)
{
	const uint8_t	*source;
	uint8_t			*destination;
	size_t			i;

	i = 0;
	source = in;
	destination = out;
	while (i < len)
	{
		destination[i] = source[i];
		i += 1;
	}
	return (out);
}

size_t		rb_pop_back(t_rb *rb, void *item)
{
	size_t	rv;

	if ((rv = rb->used != 0))
	{
		if (item != NULL)
		{
			mmemcpy(item, rb->tail, rb->esize);
		}
		rb->used -= 1;
		if (rb->used != 0)
		{
			rb->tail = (rb->tail == rb->b_start ? rb->b_end
					: rb->tail - rb->esize);
		}
	}
	return (rv);
}
