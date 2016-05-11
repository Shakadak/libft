#include "msc.h"
#include "str.h"

t_pair	strspan(int (*p)(char), char *str)
{
	size_t	i;

	i = 0;
	while (str[i] && p(str[i]))
	{
		i = i + 1;
	}
    return (pair(ft_strndup(str, i), strdup(str + i)));
}

t_pair	strbreak(int (*p)(char), char *str)
{
	size_t	i;

	i = 0;
	while (str[i] && !p(str[i]))
	{
		i = i + 1;
	}
    return (pair(ft_strndup(str, i), strdup(str + i)));
}
