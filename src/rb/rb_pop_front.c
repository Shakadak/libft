/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rb_pop_front.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npineau <npineau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/17 14:22:09 by npineau           #+#    #+#             */
/*   Updated: 2017/11/30 09:19:57 by npineau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc/rb.h"

size_t		rb_pop_front_n_with(t_rb_cpy cpy, t_rb *rb, void *xs, size_t n)
{
	size_t	i;
	uint8_t	*proxy;

	proxy = xs;
	i = 0;
	while (i < n && rb->used > 0)
	{
		if (xs != NULL)
		{
			cpy(rb->head, proxy, rb->esize);
		}
		proxy += rb->esize;
		rb->used -= 1;
		i += 1;
		if (rb->used != 0)
		{
			rb->head = (rb->head == rb->b_end ? rb->b_start
					: rb->head + rb->esize);
		}
	}
	return (i);
}

size_t		rb_pop_front_with(t_rb_cpy cpy, t_rb *rb, void *x)
{
	return (rb_pop_front_n_with(cpy, rb, x, 1));
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

size_t		rb_pop_front_n(t_rb *rb, void *xs, size_t n)
{
	return (rb_pop_front_n_with(m_memcpy, rb, xs, n));
}

size_t		rb_pop_front(t_rb *rb, void *x)
{
	return (rb_pop_front_n_with(m_memcpy, rb, x, 1));
}
