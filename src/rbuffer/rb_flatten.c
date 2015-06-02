#include "libft.h"

void	*rb_flatten(t_rb *const src)
{
	void	*dest;

	dest = ft_memalloc(src->used);
	rb_cpymem(src, dest, src->used);
	return (dest);
}
