#include "libft.h"

t_rb	rb_dup(t_rb const src)
{
	t_rb	copy;

	copy.buffer = ft_memdup(src.buffer, src.size * sizeof(unsigned char));
	if (copy.buffer == NULL)
	{
		copy.size = 0;
		copy.used = 0;
		copy.head = 0;
		copy.tail = 0;
	}
	else
	{
		copy.size = src.size;
		copy.used = src.used;
		copy.head = src.head;
		copy.tail = src.tail;
	}
	return (copy);
}
