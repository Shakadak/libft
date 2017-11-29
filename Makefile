# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: npineau <npineau@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2013/11/20 12:15:41 by npineau           #+#    #+#              #
#    Updated: 2017/11/29 11:06:32 by npineau          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		:=	libft.a

### DIRECTORIES ###

DIRSRC		:=	src
DIROBJ		:=	obj
DIRINC		:=	inc

### FILES ###

### RULES ###

all: $(NAME)

### FILES: SOURCES ###

include $(DIRSRC)/src.mk

### FILES: PATHS ###

POBJ		:=	$(addprefix $(DIROBJ)/, $(OBJ))
INC			:=	$(DIRINC)/libft.h

### ARCHIVE ###

AR			:=	ar
AR_FLAG		:=	-crus
AR_EXEC		=	$(AR) $(AR_FLAG) $@ $^

### COMPILATION ###

CC			:=	clang
C_FLAG		:=	-Wall -Wextra -Werror -pedantic
O_FLAG		:=	-O3
C_OPT		=	-o $@ -c $< -I $(DIRINC) -I .
COMPIL		=	$(CC) $(C_FLAG) $(O_FLAG) $(C_OPT)

### RULES: ARCHIVE ###

$(NAME): $(POBJ)
	$(AR_EXEC)
	ranlib $(NAME)

### RULES: MISC ###

$(POBJ): |$(DIROBJ)

$(DIROBJ):
	mkdir $(DIROBJ)

clean:
	rm -f $(POBJ)

fclean: clean
	rm -f $(NAME)

re: fclean $(NAME)

.PHONY: all clean re fclean
