/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rb_push_back.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npineau <npineau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/01 14:17:11 by npineau           #+#    #+#             */
/*   Updated: 2017/10/17 15:06:07 by npineau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	rb_enqueue(t_rb *rb, void const *src)
{
	int	rv;

	if ((rv = !rb_full(*rb)))
	{
		rb->tail = (rb->tail == rb->b_end ? rb->b_start : rb->tail - rb->esize);
		ft_memcpy(rb->tail, src, rb->esize);
		rb->used += 1;
	}
	return (rv);
}
