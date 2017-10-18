ARR	:=	ft_arrlen.c \
		ft_arrnew.c

OBJ := $(OBJ) $(ARR:.c=.o)

$(DIROBJ)/%.o: $(DIRSRC)/arr/%.c $(INC)
	$(COMPIL)
