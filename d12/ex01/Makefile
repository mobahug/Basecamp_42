# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ghorvath <ghorvath@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/06/09 21:31:12 by ghorvath          #+#    #+#              #
#    Updated: 2021/06/10 11:30:59 by ghorvath         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC				=	/usr/bin/gcc
FLAGS			=	-Wall	-Wextra	-Werror
NAME			=	ft_cat
SRC				=	ft_cat.c
OBJECTS			=	ft_cat.o

all:	$(NAME)

$(NAME):

	$(CC)	-c	$(FLAGS)	$(SRC)
	$(CC)	-o	$(FLAGS)	$(NAME)	$(OBJECTS)

clean:

	rm	-f	$(OBJECTS)

fclean:	clean

	/bin/rm	-f	$(NAME)

re:	fclean	all
