/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rb_pop_back.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npineau <npineau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/17 14:29:47 by npineau           #+#    #+#             */
/*   Updated: 2017/11/30 09:20:17 by npineau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc/rb.h"

size_t		rb_pop_back_n_with(t_rb_cpy cpy, t_rb *rb, void *xs, size_t n)
{
	size_t	i;
	uint8_t	*proxy;

	i = 0;
	proxy = xs;
	while (i < n && rb->used > 0)
	{
		if (xs != NULL)
		{
			cpy(rb->tail, proxy, rb->esize);
		}
		proxy += rb->esize;
		rb->used -= 1;
		i += 1;
		if (rb->used != 0)
		{
			rb->tail = (rb->tail == rb->b_start ? rb->b_end
					: rb->tail - rb->esize);
		}
	}
	return (i);
}

size_t		rb_pop_back_with(t_rb_cpy cpy, t_rb *rb, void *x)
{
	return (rb_pop_back_n_with(cpy, rb, x, 1));
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

size_t		rb_pop_back_n(t_rb *rb, void *xs, size_t n)
{
	return (rb_pop_back_n_with(m_memcpy, rb, xs, n));
}

size_t		rb_pop_back(t_rb *rb, void *x)
{
	return (rb_pop_back_n_with(m_memcpy, rb, x, 1));
}
