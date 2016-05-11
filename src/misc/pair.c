#include "msc.h"

t_pair	pair(void *f, void *s)
{
	return ((t_pair){f, s});
}

void	*fst(t_pair p)
{
	return (p.first);
}

void	*snd(t_pair p)
{
	return (p.second);
}
