#include "libft.h"

char	rb_next(t_rb *const rb)
{
	char	c;

	c = rb_peek(*rb);
	rb->head = (rb->head + 1) % rb->size;
	++rb->used;
	return (c);
}
