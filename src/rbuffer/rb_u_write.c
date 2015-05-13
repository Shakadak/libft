#include <stdlib.h>
#include "libft.h"

ssize_t	rb_u_write(int fildes, t_rb * const rb, size_t nbyte)
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
