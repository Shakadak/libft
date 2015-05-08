RB	:=	rb_new.c \
		rb_dup.c

OBJ := $(OBJ) $(RB:.c=.o)

$(DIROBJ)/%.o: $(DIRRB)/%.c $(INC)
	$(COMPIL)
