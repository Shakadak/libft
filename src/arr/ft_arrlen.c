#include "arr.h"

size_t	ft_arrcapacity(const t_arr *arr)
{
	size_t	l;

	l = 0;
	while (arr[l].cell)
	{
		l += 1;
	}
	return l;
}

size_t	ft_arrused(const t_arr *arr)
{
	size_t	l;

	l = 0;
	while (arr[l].cell && arr[l].size)
	{
		l += 1;
	}
	return l;
}
