/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rb_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npineau <npineau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/24 09:45:49 by npineau           #+#    #+#             */
/*   Updated: 2017/11/24 10:07:17 by npineau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "inc/rb.h"

t_rb	*rb_map(t_rb rb, size_t nsize, void (*f)(void *in, void *out),
		t_rb *out)
{
	if (out == NULL)
	{
		out = malloc(sizeof(t_rb));
	}
	rb_new(rb.used, nsize, out);
	while (out->used < rb.used)
	{
		if (out->used != 0)
		{
			out->tail = (out->tail == out->b_end ?
					out->b_start :
					out->tail + out->esize);
		}
		f(rb.head, out->tail);
		out->used += 1;
		rb.head = (rb.head == rb.b_end ? rb.b_start : rb.head + rb.esize);
	}
	return (out);
}
