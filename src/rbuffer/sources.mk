RB	:= rb_new.c

OBJ := $(OBJ) $(RB:.c=.o)

$(DIROBJ)/%.o: $(DIRRB)/%.c $(INC)
	$(COMPIL)
