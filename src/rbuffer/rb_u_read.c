size_t	rb_u_read(int fildes, t_rb *const rb, size_t nbyte)
{
	if (nbyte > rb->size - rb->used)
		nbyte = rb->size - rb->used;
	if (rb->tail + nbyte > rb->size)
		if (rb->tail + 1 != rb->size)
			nbyte = rb->size - rb->tail;
	nbyte = read(fildes, rb->buffer + (rb->tail + 1) % rb->size, nbyte);
	if (nbyte > 0)
	{
		rb->tail = (rb->tail + nbyte) % rb->size;
		rb->used += nbyte;
	}
	return (nbyte);
}
