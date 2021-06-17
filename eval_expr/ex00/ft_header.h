/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_header.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghorvath <ghorvath@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/13 18:54:44 by ghorvath          #+#    #+#             */
/*   Updated: 2021/06/13 20:06:04 by ghorvath         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_HEADER_H
# define FT_HEADER_H

# include <unistd.h>

int						eval_expr(char *str);
int						ft_atoi(char *str);
int						operators(char op);
void					ft_putstr(char *str);
void					ft_putchar(char c);
void					ft_putnbr(int nb);

#endif
