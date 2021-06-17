/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghorvath <ghorvath@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/13 15:14:37 by ghorvath          #+#    #+#             */
/*   Updated: 2021/06/13 19:35:05 by ghorvath         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"

/*
** FILE COUNTAINS: ft_read
*/

int			ft_read(int i, int x, int y)
{
	char	str[5];
	char	buf;

	while (read(0, &buf, 1))
	{
		if (buf == 'A' || buf == 'B' || buf == 'C' || buf == '-'
			|| buf == '*' || buf == '/' || buf == '\\' || buf == '|'
			|| buf == 'o' || buf == '\n' || buf == ' ')
		{
			if (buf == 'A' || buf == 'C' || buf == '/' ||
				buf == '\\' || buf == 'o')
				str[i++] = buf;
			if (buf == '\n')
				y++;
			x++;
		}
		else
			return (0);
	}
	if (!i)
		return (0);
	str[i] = '\0';
	determine_rush(str, x, y);
	return (1);
}

int			main(void)
{
	int		i;
	int		x;
	int		y;

	x = 0;
	y = 0;
	i = 0;
	if (!ft_read(i, x, y))
		ft_putstr("Nothing!\n");
	return (0);
}
