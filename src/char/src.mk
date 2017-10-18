CHR	:=	ft_atof.c \
		ft_atoi.c \
		ft_isalnum.c \
		ft_isalpha.c \
		ft_isascii.c \
		ft_isdigit.c \
		ft_isoneof.c \
		ft_isprint.c \
		ft_isspace.c \
		ft_itoa.c \
		ft_tolower.c \
		ft_toupper.c

OBJ := $(OBJ) $(CHR:.c=.o)

$(DIROBJ)/%.o: $(DIRSRC)/char/%.c $(INC)
	$(COMPIL)
