IO	:=	ft_putchar.c \
		ft_putchar_fd.c \
		ft_putendl.c \
		ft_putendl_fd.c \
		ft_putnbr.c \
		ft_putnbr_fd.c \
		ft_putnbrendl_fd.c \
		ft_putstr.c \
		ft_putstr_fd.c \
		get_next_line.c

OBJ := $(OBJ) $(IO:.c=.o)

$(DIROBJ)/%.o: $(DIRSRC)/io/%.c $(INC)
	$(COMPIL)