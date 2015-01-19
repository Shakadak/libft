LST	:= ft_lstadd.c \
	ft_lstdel.c \
	ft_lstdelone.c \
	ft_lstiter.c \
	ft_lstmap.c \
	ft_lstnew.c

$(DIROBJ)/%.o: $(DIRLST)/%.c $(INC)
	$(COMPIL)
