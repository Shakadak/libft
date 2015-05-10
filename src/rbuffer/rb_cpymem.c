#include "libft.h"

size_t	rb_cpymem(t_rb const src, void *dest, size_t n)
{
	unsigned char				*dest2;
	unsigned char const *const	src2;
	size_t						max;
	size_t						i;

	i = 0;
	src2 = src;
	dest2 = dest->buffer;
	max = dest->tail > dest->head ? dest->tail + 1 - dest->tail
		: dest->size + dest->tail + 1 - dest->head;
	if (n < max)
		max = n;
	while (i < max)
	{
		dest2[(dest->tail + 1 + i) % dest->size] = src2[i];
		++i;
	}
	dest->head += max;
	return (max);
}
