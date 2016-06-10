#include "libft.h"

int	rb_force_enqueue(t_rb *rb, void (*del)(void*), void const *src)
{
	if (rb_full(*rb))
	{
		rb_drop_n(rb, del, 1);
	}
	return (rb_enqueue(rb, src));
}
