# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ghorvath <ghorvath@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/06/12 10:11:00 by ghorvath          #+#    #+#              #
#    Updated: 2021/06/13 18:39:18 by ghorvath         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC				=	gcc
FLAGS			=	-Wall	-Wextra	-Werror
NAME			=	eval_expr
SRCS			=	eval_expr.c
OBJECTS			=	eval_expr.o

all:

	$(CC)	$(FLAGS)	-o	$(NAME)	$(SRCS)

clean:
	rm	-f	$(OBJECTS)

fclean:	clean
	/bin/rm	-f	$(NAME)

re:	fclean	all
