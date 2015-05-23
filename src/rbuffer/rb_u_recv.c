/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rb_u_recv.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npineau <npineau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/23 09:42:08 by npineau           #+#    #+#             */
/*   Updated: 2015/05/23 09:42:11 by npineau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/socket.h>
#include "libft.h"

ssize_t	rb_u_recv(int socket, t_rb *const rb, size_t nbyte, int flags)
{
	ssize_t	ret;

	if (nbyte > rb->size - rb->used)
		nbyte = rb->size - rb->used;
	if (rb->tail + nbyte > rb->size)
		if (rb->tail + 1 != rb->size)
			nbyte = rb->size - rb->tail;
	ret = recv(socket, rb->buffer + (rb->tail + 1) % rb->size, nbyte, flags);
	if (ret > 0)
	{
		rb->tail = (rb->tail + ret) % rb->size;
		rb->used += ret;
	}
	return (ret);
}
