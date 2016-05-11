#include "msc.h"

t_pair	strspan(int (*p)(char), char *str)
{
	size_t	i;

	i = 0;
	while (p(str[i]))
	{
		i = i + 1;
	}
}
