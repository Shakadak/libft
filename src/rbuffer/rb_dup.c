#include "libft.h"

t_rb	rb_dup(t_rb const src)
{
	t_rb	copy;

	copy.buffer = ft_memdup(src.buffer, src.length * src.type);
	if (copy.buffer == NULL)
	{
		copy.type = 0;
		copy.length = 0;
		copy.start = 0;
		copy.end = 0;
	}
	else
	{
		copy.type = src.type;
		copy.length = src.length;
		copy.start = src.start;
		copy.end = src.end;
	}
	return (copy);
}
