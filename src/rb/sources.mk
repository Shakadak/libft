RB	:=	rb_free.c \
		rb_full.c \
		rb_new.c \
		rb_peek.c \
		rb_push_back.c \
		rb_pop_front.c

OBJ := $(OBJ) $(RB:.c=.o)

$(DIROBJ)/%.o: $(DIRRB)/%.c $(INC)
	$(COMPIL)
