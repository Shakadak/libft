/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rb_resize.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npineau <npineau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/18 10:29:40 by npineau           #+#    #+#             */
/*   Updated: 2017/10/23 12:21:49 by npineau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "inc/rb.h"

t_rb		*rb_resize(t_rb *rb, size_t capacity)
{
	t_rb	dup;
	void	*item;

	item = malloc(rb->esize);
	rb_new(capacity, rb->esize, &dup);
	while (!rb_full(dup) && !rb_empty(*rb))
	{
		rb_pop_front(rb, item);
		rb_push_back(&dup, item);
	}
	free(item);
	free(rb->b_start);
	*rb = dup;
	return (rb);
}
