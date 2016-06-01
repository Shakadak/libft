/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rb_push_back.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npineau <npineau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/01 14:17:11 by npineau           #+#    #+#             */
/*   Updated: 2016/06/01 14:17:13 by npineau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	rb_push_back(t_rb *rb, void const *src)
{
	int	rv;

	if ((rv = !rb_full(*rb)))
	{
		ft_memcpy(rb->tail, src, rb->esize);
		rb->tail += rb->esize;
		if (rb->tail == (rb->buffer + rb->capacity * rb->esize))
		{
			rb->tail = rb->buffer;
		}
		rb->used += 1;
	}
	return (rv);
}
