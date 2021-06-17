# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ghorvath <ghorvath@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/06/07 07:52:25 by ghorvath          #+#    #+#              #
#    Updated: 2021/06/13 15:36:53 by ghorvath         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC				=	gcc
FLAGS			=	-Wall	-Wextra	-Werror
NAME			=	rush-2
SRCS			=	helpers.c	main.c	rushes.c
OBJECTS			=	helpers.o	main.o	rushes.o

all:

	$(CC)	$(FLAGS)	-o	$(NAME)	$(SRCS)

clean:
	rm	-f	$(OBJECTS)

fclean:	clean
	/bin/rm	-f	$(NAME)

re:	fclean	all
