#include "libft.h"

t_rb	rb_dup(t_rb const src)
{
	t_rb	copy;

	copy.buffer = ft_memdup(src.buffer, src.length * sizeof(char));
	if (copy.buffer == NULL)
	{
		copy.length = 0;
		copy.start = 0;
		copy.end = 0;
	}
	else
	{
		copy.length = src.length;
		copy.start = src.start;
		copy.end = src.end;
	}
	return (copy);
}
