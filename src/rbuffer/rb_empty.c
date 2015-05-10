#include "libft.h"

int	rb_empty(t_rb const buff)
{
	return (buff.head == buff.tail);
}
