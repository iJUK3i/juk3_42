# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: issmith <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/01/22 22:10:31 by issmith           #+#    #+#              #
#    Updated: 2018/01/26 15:22:26 by issmith          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = exam_prep
LIB = libexam_prep.a
LN = exam_prep

IDIR = ./includes/
SRC = ./srcs/*.c 
OBJS = *.o
MN = main.c

GCC = gcc -Wall -Werror -Wextra
OP = -c
RM = /bin/rm -f
AR = ar rcv
IX = ranlib
L = -L. -l

all: $(NAME)

$(NAME):
	$(GCC) $(OP) $(SRC) -I$(IDIR)
	$(AR) $(LIB) $(OBJS)
	$(IX) $(LIB)
	$(GCC) -o $(NAME) -I$(IDIR) $(L)$(LN) $(MN)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(LIB) $(NAME)

re: fclean all
