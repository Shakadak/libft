RB	:=	rb_consume.c \
		rb_cpymem.c \
		rb_dup.c \
		rb_empty.c \
		rb_free.c \
		rb_full.c \
		rb_new.c \
		rb_produce.c

OBJ := $(OBJ) $(RB:.c=.o)

$(DIROBJ)/%.o: $(DIRRB)/%.c $(INC)
	$(COMPIL)
