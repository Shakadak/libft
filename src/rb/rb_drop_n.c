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

#include "libft.h"

int	rb_drop_n(t_rb *rb, size_t n)
{
	n = (n > rb->used ? rb->used : n);
	if (rb->head > rb->tail)
	{
		rb->head += n * rb->esize;
		if (rb->head >= rb->buffer + rb->capacity * rb->esize)
		{
			rb->head = rb->buffer
				+ (rb->head - rb->buffer + rb->capacity * rb->esize);
		}
	}
	else
	{
		rb->head += n * rb->esize;
	}
	return (1);
}
