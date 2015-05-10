#include "libft.h"

size_t	rb_memcpy(void const *const src, t_rb *dest, size_t const n)
{
	unsigned char				*dest2;
	unsigned char const *const	src2;
	size_t						max;
	size_t						i;

	i = 0;
	src2 = src;
	dest2 = dest->buffer;
	max = dest->tail > dest->head ? dest->size + dest->head - dest->tail - 1
		: dest->head - dest->tail - 1;
	if (n < max)
		max = n;
	while (i < max)
	{
		dest2[(dest->tail + 1 + i) % dest->size] = src2[i];
		++i;
	}
	dest->tail += max;
	return (max);
}
