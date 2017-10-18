/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rb_drop_front_n.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npineau <npineau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/18 10:32:37 by npineau           #+#    #+#             */
/*   Updated: 2017/10/18 10:41:49 by npineau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc/rb.h"

size_t	rb_drop_front_n(void (*del)(void*), t_rb *rb, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n && rb->used > 0)
	{
		del(rb->head);
		if (rb->head == rb->b_end)
		{
			rb->head = rb->b_start;
		}
		else
		{
			rb->head += rb->esize;
		}
		rb->used -= 1;
		i += 1;
	}
	return (i);
}
