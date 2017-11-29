/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rb_grow_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npineau <npineau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/25 12:02:40 by npineau           #+#    #+#             */
/*   Updated: 2017/11/29 13:33:01 by npineau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc/rb.h"

size_t	rb_grow_push_back_n_with
	(t_rb_cpy cpy, t_rb *rb, void const *xs, size_t n)
{
	if (n > rb->capacity - rb->used)
	{
		return (rb_grow_push_back_n_with(cpy, rb_resize(rb, rb->capacity * 2),
				xs, n));
	}
	else
	{
		return (rb_push_back_n_with(cpy, rb, xs, n));
	}
}

size_t	rb_grow_push_back_with
	(t_rb_cpy cpy, t_rb *rb, void const *x)
{
	return (rb_grow_push_back_n_with(cpy, rb, x, 1));
}

size_t	rb_grow_push_back_n(t_rb *rb, void const *xs, size_t n)
{
	if (n > rb->capacity - rb->used)
	{
		return (rb_grow_push_back_n(rb_resize(rb, rb->capacity * 2), xs, n));
	}
	else
	{
		return (rb_push_back_n(rb, xs, n));
	}
}

size_t	rb_grow_push_back(t_rb *rb, void const *x)
{
	return (rb_grow_push_back_n(rb, x, 1));
}
