RB	:=	rb_back.c \
		rb_dequeue.c \
		rb_drop_back_n.c \
		rb_drop_front_n.c \
		rb_drop_n.c \
		rb_dup.c \
		rb_empty.c \
		rb_enqueue.c \
		rb_force_enqueue.c \
		rb_free.c \
		rb_front.c \
		rb_full.c \
		rb_index.c \
		rb_new.c \
		rb_peek.c \
		rb_pop_back.c \
		rb_pop_front.c \
		rb_push_back.c \
		rb_push_front.c \
		rb_resize.c
 
OBJ := $(OBJ) $(RB:.c=.o)

$(DIROBJ)/%.o: $(DIRSRC)/rb/%.c $(INC)
	$(COMPIL)
