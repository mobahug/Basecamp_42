# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ghorvath <ghorvath@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/06/10 16:33:14 by raho              #+#    #+#              #
#    Updated: 2021/06/16 13:53:18 by ghorvath         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC				=	/usr/bin/gcc
FLAGS			=	-Wall	-Wextra	-Werror
NAME			=	bsq
SRCS			=	./srcs/
INCL			=	./includes/
FNCS			=	$(SRCS)ft_map_reader.c	$(SRCS)ft_read_files.c	\
					$(SRCS)ft_map_modifier.c	$(SRCS)ft_map_modifier2.c	\
					$(SRCS)helpers.c	$(SRCS)main.c	$(SRCS)errors.c
CFLG			=	$(CC)	$(FLAGS)	-o	$(NAME)	$(FNCS)	-I	$(INCL)


all:	$(NAME)

$(NAME):

	$(CFLG)

clean:

	rm	-f $(wildcard *.o)

fclean:	clean

	/bin/rm	-f	$(NAME)

re:	fclean	all
