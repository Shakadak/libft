ARR	:=	ft_arrlen.c \
		ft_arrnew.c

OBJ := $(OBJ) $(ARR:.c=.o)

$(DIROBJ)/%.o: $(DIRARR)/%.c $(INC)
	$(COMPIL)
