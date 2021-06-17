/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_header.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghorvath <ghorvath@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/12 13:40:09 by ghorvath          #+#    #+#             */
/*   Updated: 2021/06/13 19:36:28 by ghorvath         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_HEADER_H
# define FT_HEADER_H

# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>

# define BUFF_SIZE 8192

/*
**helpers
*/

void					ft_putchar(char c);
void					ft_putstr(char *str);
void					ft_putnbr(int nb);
int						ft_strcmp(char *s1, char *s2);

/*
**main
*/

int						ft_read(int i, int x, int y);

/*
**rushes
*/

void					printing(char *str, int x, int y);
void					determine_rush(char *str, int x, int y);

#endif
