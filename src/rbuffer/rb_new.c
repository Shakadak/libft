#include <stdlib.h>
#include "libft.h"

t_rb	rb_new(size_t const size)
{
	t_rb	ring;

	ring.buffer = malloc(size * sizeof(unsigned char));
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
