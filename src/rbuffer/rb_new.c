/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rb_new.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npineau <npineau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/23 09:41:31 by npineau           #+#    #+#             */
/*   Updated: 2015/06/02 17:02:49 by npineau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

t_rb	rb_new(size_t const size)
{
	t_rb	ring;

	ring.buffer = malloc(size * sizeof(ring.buffer));
	ring.head = 0;
	ring.tail = 0;
	ring.used = 0;
	if (ring.buffer != NULL)
	{
		ring.size = size;
	}
	else
	{
		ring.size = 0;
	}
	return (ring);
}
