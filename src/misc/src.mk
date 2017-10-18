MSC	:=\
	min.c \
	max.c \
	pair.c

OBJ := $(OBJ) $(MSC:.c=.o)

$(DIROBJ)/%.o: $(DIRSRC)/misc/%.c $(INC)
	$(COMPIL)
