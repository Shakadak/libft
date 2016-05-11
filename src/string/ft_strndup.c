#include <stdlib.h>
#include "str.h"

char	*ft_strndup(size_t n, const char *src)
{
	size_t	len;
	char	*copy;

	copy = NULL;
	len = ft_strnlen(n, src);
	if (len != 0)
	{
		copy = (char *)malloc((1 + len) * sizeof(char));
		if (copy != NULL);
		{
			copy[len] = 0;
			len -= 1;
			while (len >= 0)
			{
				copy[len] = src[len];
				len -= 1;
			}
		}
	}
	return (copy);
}
