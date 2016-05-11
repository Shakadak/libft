# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: npineau <npineau@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2013/11/20 12:15:41 by npineau           #+#    #+#              #
#    Updated: 2015/05/18 18:11:57 by npineau          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		:=	libft.a

### DIRECTORIES ###

DIRSRC		:=	src
DIROBJ		:=	obj
DIRCHR		:=	$(DIRSRC)/char
DIRLST		:=	$(DIRSRC)/list
DIRMEM		:=	$(DIRSRC)/memory
DIRMSC		:=	$(DIRSRC)/misc
DIRIO		:=	$(DIRSRC)/io
DIRSTR		:=	$(DIRSRC)/string
DIRINC		:=	inc

### FILES ###

### FILES: SOURCES ###

include $(DIRCHR)/sources.mk
include $(DIRLST)/sources.mk
include $(DIRMEM)/sources.mk
include $(DIRMSC)/sources.mk
include $(DIRIO)/sources.mk
include $(DIRSTR)/sources.mk

### FILES: PATHS ###

POBJ		:=	$(addprefix $(DIROBJ)/, $(OBJ))
INC			:=	$(DIRINC)/libft.h

### ARCHIVE ###

AR			:=	ar
AR_FLAG		:=	-crus
AR_EXEC		=	$(AR) $(AR_FLAG) $@ $^

### COMPILATION ###

C_FLAG		:=	-Wall -Wextra -Werror
O_FLAG		:=	-O3
C_OPT		=	-o $@ -c $< -I $(DIRINC)
COMPIL		=	$(CC) $(C_FLAG) $(O_FLAG) $(C_OPT)

### RULES ###

all: $(NAME)

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
