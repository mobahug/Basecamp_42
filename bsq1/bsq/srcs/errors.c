/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   errors.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghorvath <ghorvath@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 13:52:25 by ghorvath          #+#    #+#             */
/*   Updated: 2021/06/16 20:02:04 by ghorvath         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"

int			ft_invalid_map(char *array)
{
	g_index = 0;
	while (array[g_index] != '\0')
	{
		if (array[g_index] == '\n' && array[g_index - 1] == '\n')
		{
			ft_error_putstr("map error\n");
			return (1);
		}
		g_index++;
	}
	return (0);
}

void		ft_error_putchar(char c)
{
	write(2, &c, 1);
}

void		ft_error_putstr(char *str)
{
	int		h;

	h = 0;
	while (str[h] != '\0')
	{
		ft_error_putchar(str[h]);
		h++;
	}
}
