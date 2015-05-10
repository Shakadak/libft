#ifndef RB_H
# define RB_H

typedef struct	s_rb
{
	void		*buffer;
	size_t		size;
	size_t		head;
	size_t		tail;
}				t_rb;

t_rb			rb_dup(t_rb const src);
t_rb			rb_new(size_t const length);

#endif
