#include "libft.h"

void	*rb_flatten(t_rb *const src)
{
	void	*dest;

	dest = ft_strnew(src->used);
	rb_cpystr(src, dest, src->used);
	return (dest);
}
