/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rb_pop_front.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npineau <npineau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/01 14:17:01 by npineau           #+#    #+#             */
/*   Updated: 2017/10/17 15:07:50 by npineau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	rb_dequeue(t_rb *rb, void **item)
{
	int	rv;

	if ((rv = !rb_empty(*rb)))
	{
		*item = ft_memdup(rb->head, rb->esize);
		if (*item != NULL)
		{
			if (rb->head == rb->b_end)
			{
				rb->head = rb->b_start;
			}
			else
			{
				rb->head += rb->esize;
			}
		}
		else
		{
			rv = 0;
		}
	}
	return (rv);
}
