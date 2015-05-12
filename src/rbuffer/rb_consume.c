#include "libft.h"

size_t	rb_consume(t_rb *const src, void *dest, size_t n)
{
	unsigned char	*dest2;
	unsigned char	*src2;
	size_t			max;
	size_t			i;

	i = 0;
	src2 = src->buffer;
	dest2 = dest;
	max = src->used;
	if (n < max)
		max = n;
	while (i < max)
	{
		dest2[i] = src2[(src->head + i) % src->size];
		++i;
	}
	src->head += max;
	return (max);
}
