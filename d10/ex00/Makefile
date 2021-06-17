# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ghorvath <ghorvath@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/06/07 07:52:25 by ghorvath          #+#    #+#              #
#    Updated: 2021/06/07 11:34:52 by ghorvath         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC				=	gcc
FLAGS			=	-Wall	-Wextra	-Werror	-c
NAME			=	libft.a
SRC_PATH		=	./srcs/
SRCS			=	$(SRC_PATH)ft_putchar.c	$(SRC_PATH)ft_putstr.c	\
					$(SRC_PATH)ft_strcmp.c	$(SRC_PATH)ft_strlen.c	$(SRC_PATH)ft_swap.c
OBJECTS			=	ft_putchar.o	ft_putstr.o	ft_strcmp.o	ft_strlen.o	ft_swap.o
INCLUDE			=	./includes/
HEADER			=	-c	-I	$(INCLUDE)

all:	$(NAME)

$(NAME):	$(OBJECTS)

	ar rc	$(NAME)	$(OBJECTS)

$(OBJECTS):

	$(CC)	$(FLAGS)	$(SRCS)	$(HEADER)
clean:

	rm	-f	$(OBJECTS)

fclean:	clean

	/bin/rm	-f	$(NAME)	$(OBJECTS)

re:	fclean	all
