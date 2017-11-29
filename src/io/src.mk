IO	:=	ft_putchar.c \
		ft_putchar_fd.c \
		ft_putendl.c \
		ft_putendl_fd.c \
		ft_putnbr.c \
		ft_putstr.c \
		ft_putstr_fd.c \
		get_next_line.c

OBJ := $(OBJ) $(IO:.c=.o)

$(DIROBJ)/get_next_line.o: $(DIRSRC)/io/get_next_line.c $(DIRINC)/io.h $(DIRINC)/rb.h $(DIRINC)/str.h
	$(COMPIL)

$(DIROBJ)/%.o: $(DIRSRC)/io/%.c $(DIRINC)/io.h
	$(COMPIL)
