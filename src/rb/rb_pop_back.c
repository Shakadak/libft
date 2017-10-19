/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rb_pop_back.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npineau <npineau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/17 14:29:47 by npineau           #+#    #+#             */
/*   Updated: 2017/10/19 13:04:59 by npineau          ###   ########.fr       */
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

int			rb_pop_back(t_rb *rb, void *item)
{
	int	rv;

	if ((rv = !rb_empty(*rb)))
	{
		if (item != NULL)
		{
			mmemcpy(item, rb->tail, rb->esize);
		}
		rb->tail = (rb->tail == rb->b_start ? rb->b_end : rb->tail - rb->esize);
		rb->used -= 1;
	}
	return (rv);
}
