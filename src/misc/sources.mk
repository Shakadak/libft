MSC	:=\
	min.c \
	max.c \
	pair.c

OBJ := $(OBJ) $(MSC:.c=.o)

$(DIROBJ)/%.o: $(DIRMSC)/%.c $(INC)
	$(COMPIL)
