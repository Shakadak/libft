/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rb_grow_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npineau <npineau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/25 12:02:40 by npineau           #+#    #+#             */
/*   Updated: 2017/11/28 15:36:48 by npineau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc/rb.h"

size_t	rb_grow_push_back(t_rb *rb, void const *elem)
{
	size_t	check;

	if (rb_full(*rb))
	{
		check = rb_push_back(rb_resize(rb, rb->capacity * 2), elem);
	}
	else
	{
		check = rb_push_back(rb, elem);
	}
	return (check);
}
