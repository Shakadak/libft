/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rb_grow_push_front.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npineau <npineau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/25 12:29:14 by npineau           #+#    #+#             */
/*   Updated: 2017/10/25 12:29:42 by npineau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc/rb.h"

int	rb_grow_push_front(t_rb *rb, void const *elem)
{
	int	check;

	if (rb_full(*rb))
	{
		check = rb_push_front(rb_resize(rb, rb->capacity * 2), elem);
	}
	else
	{
		check = rb_push_front(rb, elem);
	}
	return (check);
}