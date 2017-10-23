/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rb_push_back.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npineau <npineau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/17 13:33:59 by npineau           #+#    #+#             */
/*   Updated: 2017/10/23 15:20:16 by npineau          ###   ########.fr       */
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

int			rb_push_back(t_rb *rb, void const *src)
{
	int	rv;

	if ((rv = !rb_full(*rb)))
	{
		if (rb->used != 0)
		{
			rb->tail = (rb->tail == rb->b_end ?
					rb->b_start :
					rb->tail + rb->esize);
		}
		mmemcpy(rb->tail, src, rb->esize);
		rb->used += 1;
	}
	return (rv);
}
