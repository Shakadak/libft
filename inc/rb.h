#ifndef RB_H
# define RB_H

typedef struct	s_rb
{
	void		*buffer;
	size_t		size;
	size_t		used;
	size_t		head;
	size_t		tail;
}				t_rb;

size_t			rb_consume(t_rb *const src, void *dest, size_t n);
size_t			rb_cpymem(t_rb *const src, void *dest, size_t n);
t_rb			rb_dup(t_rb const src);
int				rb_empty(t_rb const buff);
void			rb_free(t_rb * const rb);
int				rb_full(t_rb const buff);
t_rb			rb_new(size_t const length);
size_t			rb_produce(void *const src, t_rb *dest, size_t const n);
ssize_t			rb_u_read(int fildes, t_rb *const rb, size_t nbyte);
ssize_t			rb_u_write(int fildes, t_rb *const rb, size_t nbyte);

#endif
