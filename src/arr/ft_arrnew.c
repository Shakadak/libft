#include <stdlib.h>
#include "arr.h"
#include "mem.h"

t_arr	*ft_arrnew(size_t l)
{
	t_arr	*new;
	size_t	s;

	new = NULL;
	if (l != 0)
	{
		s = (l + 1) * sizeof(t_arr);
		new = (t_arr *)malloc(s);
		ft_bzero(new, s);
		while (l > 0)
		{
			l -= 1;
			new[l].cell = 1;
		}
	}
	return (new);
}
