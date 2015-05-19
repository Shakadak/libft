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
	ret = recv(fildes, rb->buffer + (rb->tail + 1) % rb->size, nbyte, flags);
	if (ret > 0)
	{
		rb->tail = (rb->tail + ret) % rb->size;
		rb->used += ret;
	}
	return (ret);
}
