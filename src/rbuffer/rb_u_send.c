/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rb_u_send.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npineau <npineau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/23 09:42:20 by npineau           #+#    #+#             */
/*   Updated: 2015/05/23 09:42:21 by npineau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/socket.h>
#include "libft.h"

ssize_t	rb_u_send(int socket, t_rb *const rb, size_t nbyte, int flags)
{
	ssize_t	ret;

	if (nbyte > rb->used)
		nbyte = rb->used;
	if (rb->head + nbyte > rb->size)
		nbyte = rb->size - rb->head;
	ret = send(socket, rb->buffer + rb->head, nbyte, flags);
	if (ret > 0)
	{
		rb->head += (rb->head + ret) % rb->size;
		rb->used -= ret;
	}
	return (ret);
}
