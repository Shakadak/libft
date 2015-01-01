# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: npineau <npineau@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2013/11/20 12:15:41 by npineau           #+#    #+#              #
#    Updated: 2014/05/31 14:04:48 by npineau          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		:=	libft.a

### DIRECTORIES ###

DIRSRC		:=	sources
DIROBJ		:=	objects
DIRCHR		:=	$(DIRSRC)/char
DIRLST		:=	$(DIRSRC)/list
DIRMEM		:=	$(DIRSRC)/memory
DIRIO		:=	$(DIRSRC)/io
DIRSTR		:=	$(DIRSRC)/string
DIRINC		:=	includes

### FILES ###

### FILES: SOURCES ###

include $(DIRCHR)/sources.mk
include $(DIRLST)/sources.mk
include $(DIRMEM)/sources.mk
include $(DIRIO)/sources.mk
include $(DIRSTR)/sources.mk

### FILES: OBJECTS ###

OBJ			:=	$(CHR:.c=.o) \
				$(LST:.c=.o) \
				$(MEM:.c=.o) \
				$(IO:.c=.o) \
				$(STR:.c=.o)

### FILES: PATHS ###

POBJ		:=	$(addprefix $(DIROBJ)/, $(OBJ))
INC			:=	$(DIRINC)/libft.h

### ARCHIVE ###

AR			:=	ar
AR_FLAG		:=	-crus
AR_EXEC		=	$(AR) $(AR_FLAG) $@ $^

### COMPILATION ###

CC			:=	clang
C_FLAG		:=	-Wall -Wextra -Werror
O_FLAG		:=	-O3
C_OPT		=	-o $@ -c $< -I $(DIRINC)
COMPIL		=	$(CC) $(C_FLAG) $(O_FLAG) $(C_OPT)

### RULES ###

all: $(NAME)

### RULES: COMPILATION ###

$(DIROBJ)/%.o: $(DIRCHR)/%.c $(INC)
	$(COMPIL)

$(DIROBJ)/%.o: $(DIRLST)/%.c $(INC)
	$(COMPIL)

$(DIROBJ)/%.o: $(DIRMEM)/%.c $(INC)
	$(COMPIL)

$(DIROBJ)/%.o: $(DIRIO)/%.c $(INC)
	$(COMPIL)

$(DIROBJ)/%.o: $(DIRSTR)/%.c $(INC)
	$(COMPIL)

### RULES: ARCHIVE ###

$(NAME): $(POBJ)
	$(AR_EXEC)

### RULES: MISC ###

$(POBJ): |$(DIROBJ)

$(DIROBJ):
	mkdir $(DIROBJ)

clean:
	@(rm -f $(POBJ))

fclean: clean
	@(rm -f $(NAME))

re: fclean $(NAME)

.PHONY: all clean re fclean
