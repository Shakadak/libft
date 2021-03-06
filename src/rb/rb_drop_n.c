/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rb_drop_n.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npineau <npineau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/09 15:59:00 by npineau           #+#    #+#             */
/*   Updated: 2017/10/17 15:09:11 by npineau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc/libft.h"

int	rb_drop_n(t_rb *rb, void (*del)(void*), size_t n)
{
	while (n > 0 && rb->used > 0)
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
		n -= 1;
	}
	return (1);
}
