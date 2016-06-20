/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rb_drop_n.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npineau <npineau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/09 15:59:00 by npineau           #+#    #+#             */
/*   Updated: 2016/06/09 15:59:02 by npineau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc/libft.h"

int	rb_drop_n(t_rb *rb, void (*del)(void*), size_t n)
{
	while (n > 0 && rb->used > 0)
	{
		del(rb->head);
		rb->head += rb->esize;
		if (rb->head == (rb->buffer + rb->capacity * rb->esize))
		{
			rb->head = rb->buffer;
		}
		rb->used -= 1;
		n -= 1;
	}
	return (1);
}
