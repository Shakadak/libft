/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rb_push_front.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npineau <npineau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/17 13:44:00 by npineau           #+#    #+#             */
/*   Updated: 2017/10/19 13:26:42 by mde-jesu         ###   ########.fr       */
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

int			rb_push_front(t_rb *rb, void const *src)
{
	int		rv;

	if ((rv = !rb_full(*rb)))
	{
		if (rb->used != 0)
		{
			rb->head = (rb->head == rb->b_start ? rb->b_end : rb->head - rb->esize);
		}
		mmemcpy(rb->head, src, rb->esize);
		rb->used += 1;
	}
	return (rv);
}
