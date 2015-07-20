MSC	:=\
	min.c \
	max.c

OBJ := $(OBJ) $(MSC:.c=.o)

$(DIROBJ)/%.o: $(DIRMSC)/%.c $(INC)
	$(COMPIL)
