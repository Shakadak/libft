RB	:=	rb_dequeue.c \
		rb_drop_n.c \
		rb_dup.c \
		rb_empty.c \
		rb_enqueue.c \
		rb_free.c \
		rb_full.c \
		rb_new.c \
		rb_peek.c

OBJ := $(OBJ) $(RB:.c=.o)

$(DIROBJ)/%.o: $(DIRRB)/%.c $(INC)
	$(COMPIL)
