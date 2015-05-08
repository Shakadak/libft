#include <stdlib.h>
#include "libft.h"

t_rb	rb_new(size_t const length, size_t const type)
{
	t_rb	ring;

	ring.buffer = malloc(length * type);
	ring.start = 0;
	ring.end = 0;
	if (ring.buffer != NULL)
	{
		ring.type = type;
		ring.length = length;
	}
	else
	{
		ring.type = 0;
		ring.length = 0;
	}
	return (ring);
}
