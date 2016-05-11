LST	:= ft_lstadd.c \
	ft_lstapp.c \
	ft_lstdel.c \
	ft_lstdelone.c \
	ft_lstiter.c \
	ft_lstmap.c \
	ft_lstnew.c

OBJ := $(OBJ) $(LST:.c=.o)

$(DIROBJ)/%.o: $(DIRLST)/%.c $(INC)
	$(COMPIL)
