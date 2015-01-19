MEM := ft_array_free.c \
	ft_bzero.c \
	ft_memalloc.c \
	ft_memccpy.c \
	ft_memchr.c \
	ft_memcmp.c \
	ft_memcpy.c \
	ft_memdel.c \
	ft_memmove.c \
	ft_memset.c

$(DIROBJ)/%.o: $(DIRMEM)/%.c $(INC)
	$(COMPIL)
