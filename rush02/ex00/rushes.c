/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rushes.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghorvath <ghorvath@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/12 17:17:26 by thle              #+#    #+#             */
/*   Updated: 2021/06/13 19:34:52 by ghorvath         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"

/*
** FILE COUNTAINS: printing, determine_rush
*/

void		printing(char *str, int x, int y)
{
	int		index;

	index = 0;
	while (str[index] != '\0')
	{
		ft_putstr("[rush-0");
		ft_putchar(str[index]);
		ft_putstr("] [");
		ft_putnbr(x);
		ft_putstr("] [");
		ft_putnbr(y);
		ft_putstr("]");
		str[index + 1] != '\0' ? ft_putstr(" || ") : ft_putchar('\n');
		index++;
	}
}

void		determine_rush(char *str, int x, int y)
{
	x = (y == 1 ? x - 1 : x / y - 1);
	if (str[0] == 'o')
		printing("0", x, y);
	else if (str[0] == '/')
		printing("1", x, y);
	else if (x == 1 && y == 1)
		printing("234", x, y);
	else if (y == 1 && str[1] == 'A')
		printing("2", x, y);
	else if (y == 1 && str[1] == 'C')
		printing("34", x, y);
	else if (x == 1 && str[1] == 'C')
		printing("24", x, y);
	else if (x == 1 && str[1] == 'A')
		printing("3", x, y);
	else if (ft_strcmp(str, "AACC") == 0)
		printing("2", x, y);
	else if (ft_strcmp(str, "ACAC") == 0)
		printing("3", x, y);
	else if (ft_strcmp(str, "ACCA") == 0)
		printing("4", x, y);
}
