/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rb_u_read.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npineau <npineau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/23 09:42:02 by npineau           #+#    #+#             */
/*   Updated: 2015/05/23 09:42:04 by npineau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

ssize_t	rb_u_read(int fildes, t_rb *const rb, size_t nbyte)
{
	ssize_t	ret;

	if (nbyte > rb->size - rb->used)
		nbyte = rb->size - rb->used;
	if (rb->tail + nbyte > rb->size)
		if (rb->tail + 1 != rb->size)
			nbyte = rb->size - rb->tail;
	ret = read(fildes, rb->buffer + (rb->tail + 1) % rb->size, nbyte);
	if (ret > 0)
	{
		rb->tail = (rb->tail + ret) % rb->size;
		rb->used += ret;
	}
	return (ret);
}
