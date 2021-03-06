/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rb_index.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npineau <npineau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/25 11:35:54 by npineau           #+#    #+#             */
/*   Updated: 2017/11/29 11:06:51 by npineau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc/rb.h"

void	*rb_index(t_rb const rb, size_t const i)
{
	size_t	head_space;
	void	*elem;

	if (i >= rb.used || rb.used == 0)
	{
		elem = NULL;
	}
	else if (rb.head <= rb.tail)
	{
		elem = rb.head + i * rb.esize;
	}
	else
	{
		head_space = (rb.b_end - rb.head) / rb.esize;
		if (i < head_space)
		{
			elem = rb.head + i * rb.esize;
		}
		else
		{
			elem = rb.b_start + (i - head_space) * rb.esize;
		}
	}
	return (elem);
}

ssize_t	rb_elem_index(t_rb rb, int (*equ)(void *x, void *elem), void *elem)
{
	size_t	i;

	i = 0;
	while (i < rb.used)
	{
		if (equ(rb.head, elem))
			return (i);
		rb.head = (rb.head == rb.b_end ? rb.b_start
				: rb.head + rb.esize);
		i += 1;
	}
	return (-1);
}

ssize_t	rb_find_index(t_rb rb, int (*check)(void *x))
{
	size_t	i;

	i = 0;
	while (i < rb.used)
	{
		if (check(rb.head))
			return (i);
		rb.head = (rb.head == rb.b_end ? rb.b_start
				: rb.head + rb.esize);
		i += 1;
	}
	return (-1);
}
