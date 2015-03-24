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

#endif
