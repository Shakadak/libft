/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rb_drop_back_n.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npineau <npineau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/18 10:43:33 by npineau           #+#    #+#             */
/*   Updated: 2017/10/18 10:44:37 by npineau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc/rb.h"

size_t	rb_drop_back_n(void (*del)(void*), t_rb *rb, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n && rb->used > 0)
	{
		del(rb->tail);
		if (rb->tail == rb->b_start)
		{
			rb->tail = rb->b_end;
		}
		else
		{
			rb->tail -= rb->esize;
		}
		rb->used -= 1;
		i += 1;
	}
	return (i);
}
