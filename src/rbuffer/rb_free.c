#include <stdlib.h>
#include "libft.h"

void	rb_free(t_rb * const rb)
{
	free(rb->buffer);
	rb->buffer = NULL;
}
