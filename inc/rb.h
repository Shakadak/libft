#ifndef RB_H
# define RB_H

typedef struct	s_rb
{
	void		*buffer;
	size_t		type;
	size_t		length;
	size_t		start;
	size_t		end;
}				t_rb;

t_rb	rb_dup(t_rb const src);
t_rb	rb_new(size_t const length, size_t const type);

#endif
