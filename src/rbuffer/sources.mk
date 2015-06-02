RB	:=	rb_consume.c \
		rb_cpystr.c \
		rb_dup.c \
		rb_empty.c \
		rb_flatten.c \
		rb_free.c \
		rb_full.c \
		rb_new.c \
		rb_next.c \
		rb_peek.c \
		rb_produce.c \
		rb_u_read.c \
		rb_u_recv.c \
		rb_u_send.c \
		rb_u_write.c

OBJ := $(OBJ) $(RB:.c=.o)

$(DIROBJ)/%.o: $(DIRRB)/%.c $(INC)
	$(COMPIL)
