/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rb_u_write.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npineau <npineau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/23 09:42:29 by npineau           #+#    #+#             */
/*   Updated: 2015/05/23 09:42:30 by npineau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

ssize_t	rb_u_write(int fildes, t_rb *const rb, size_t nbyte)
{
	ssize_t	ret;

	if (nbyte > rb->used)
		nbyte = rb->used;
	if (rb->head + nbyte > rb->size)
		nbyte = rb->size - rb->head;
	ret = write(fildes, rb->buffer + rb->head, nbyte);
	if (ret > 0)
	{
		rb->head += (rb->head + ret) % rb->size;
		rb->used -= ret;
	}
	return (ret);
}
