#include "str.h"

size_t	ft_strnlen(size_t n, char *str)
{
	size_t	len;

	len = 0;
	while (str[len] != '\0' && n > 0)
	{
		len += 1;
		n -= 1;
	}
	return (len);
}
