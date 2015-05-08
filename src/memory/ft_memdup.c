#include "libft.h"

void	*ft_memdup(void const *src, size_t const size)
{
	void	*copy;

	copy = ft_memalloc(size);
	ft_memcpy(copy, src, size);
	return (copy);
}
