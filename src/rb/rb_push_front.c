/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rb_push_front.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npineau <npineau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/17 13:44:00 by npineau           #+#    #+#             */
/*   Updated: 2017/11/28 15:28:10 by npineau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc/rb.h"

size_t		rb_push_front_n_with(
		void (*cpy)(void const *in, void *out, size_t size),
		t_rb *rb, void const **src, size_t n)
{
	size_t	i;

	i = 0;
	if (i < n && rb->used < rb->capacity)
	{
		i += 1;
		if (rb->used != 0)
		{
			rb->head = (rb->head == rb->b_start ?
					rb->b_end :
					rb->head - rb->esize);
		}
		cpy(src[n - i], rb->head, rb->esize);
		rb->used += 1;
	}
	return (i);
}

size_t		rb_push_front_with(
		void (*cpy)(void const *in, void *out, size_t size),
		t_rb *rb, void const *src)
{
	return (rb_push_front_n_with(cpy, rb, &src, 1));
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

size_t		rb_push_front_n(t_rb *rb, void const **src, size_t n)
{
	return (rb_push_front_n_with(m_memcpy, rb, src, n));
}

size_t		rb_push_front(t_rb *rb, void const *src)
{
	return (rb_push_front_n_with(m_memcpy, rb, &src, 1));
}
