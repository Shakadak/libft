#include "libft.h"

int	ft_putnbrendl_fd(int const n, int fd)
{
	int	ret;
	int	retn;

	ret = ft_putnbr_fd(n, fd);
	if (ret == -1)
		return (-1);
	retn = ft_putchar_fd('\n', fd);
	if (retn == -1)
		return (-1);
	return (ret + retn);
}
