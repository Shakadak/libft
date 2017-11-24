/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rb_pop_front.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npineau <npineau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/17 14:22:09 by npineau           #+#    #+#             */
/*   Updated: 2017/11/24 08:31:34 by npineau          ###   ########.fr       */
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

int			rb_pop_front(t_rb *rb, void *item)
{
	int	rv;

	if ((rv = rb->used > 0))
	{
		if (item != NULL)
		{
			mmemcpy(item, rb->head, rb->esize);
		}
		rb->used -= 1;
		if (rb->used != 0)
		{
			rb->head = (rb->head == rb->b_end ? rb->b_start : rb->head + rb->esize);
		}
	}
	return (rv);
}
