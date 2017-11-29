/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rb_pop_back.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npineau <npineau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/17 14:29:47 by npineau           #+#    #+#             */
/*   Updated: 2017/11/29 07:52:24 by npineau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc/rb.h"

size_t		rb_pop_back_n_with(
		void (*cpy)(void const *in, void *out, size_t size),
		t_rb *rb, void **xs, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n && rb->used > 0)
	{
		if (xs != NULL)
		{
			cpy(rb->tail, xs[i], rb->esize);
		}
		rb->used -= 1;
		if (rb->used != 0)
		{
			rb->tail = (rb->tail == rb->b_start ? rb->b_end
					: rb->tail - rb->esize);
		}
		i += 1;
	}
	return i;
}

size_t 		rb_pop_back_with(
		void (*cpy)(void const *in, void *out, size_t size),
		t_rb *rb, void *xs)
{
	return (rb_pop_back_n_with(cpy, rb, &xs, 1));
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

size_t		rb_pop_back_n(t_rb *rb, void **xs, size_t n)
{
	return (rb_pop_back_n_with(m_memcpy, rb, xs, n));
}

size_t		rb_pop_back(t_rb *rb, void *xs)
{
	return (rb_pop_back_n_with(m_memcpy, rb, &xs, 1));
}
