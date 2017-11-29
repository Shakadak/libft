/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rb_push_front.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npineau <npineau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/17 13:44:00 by npineau           #+#    #+#             */
/*   Updated: 2017/11/29 14:10:54 by npineau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc/rb.h"

size_t		rb_push_front_n_with
	(t_rb_cpy cpy, t_rb *rb, void const *xs, size_t n)
{
	size_t			i;
	uint8_t const	*proxy;

	i = 0;
	proxy = xs;
	proxy += (n - 1) * rb->esize;
	while (i < n && rb->used < rb->capacity)
	{
		if (rb->used != 0)
		{
			rb->head = (rb->head == rb->b_start ?
					rb->b_end :
					rb->head - rb->esize);
		}
		cpy(proxy, rb->head, rb->esize);
		proxy -= rb->esize;
		rb->used += 1;
		i += 1;
	}
	return (i);
}

size_t		rb_push_front_with(t_rb_cpy cpy, t_rb *rb, void const *x)
{
	return (rb_push_front_n_with(cpy, rb, x, 1));
}

static void	m_memcpy(void const *in, void *out, size_t len)
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
}

size_t		rb_push_front_n(t_rb *rb, void const *xs, size_t n)
{
	return (rb_push_front_n_with(m_memcpy, rb, xs, n));
}

size_t		rb_push_front(t_rb *rb, void const *x)
{
	return (rb_push_front_n_with(m_memcpy, rb, x, 1));
}
