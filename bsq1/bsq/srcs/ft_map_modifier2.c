/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map_modifier2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghorvath <ghorvath@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 08:43:56 by ghorvath          #+#    #+#             */
/*   Updated: 2021/06/16 19:38:59 by ghorvath         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"

void	ft_change_map(char **map2, int width, int height)
{
	g_h = 0;
	g_j = 0;
	while (g_h < height)
	{
		while (g_j < width)
		{
			if (map2[g_h][g_j] == g_result)
			{
				g_y = g_h;
				g_x = g_j;
				g_j = width;
				g_h = height;
			}
			g_j++;
		}
		g_j = 1;
		g_h++;
	}
	ft_chartox(map2, width, height);
}

void	ft_chartox(char **map2, int width, int height)
{
	g_h = 0;
	g_j = 0;
	while (g_h < g_result - 48)
	{
		while (g_j < g_result - 48)
		{
			map2[g_y - g_h][g_x - g_j] = 120;
			g_j++;
		}
		g_j = 0;
		g_h++;
	}
	ft_final_map(map2, width, height);
}

void	ft_final_map(char **map2, int width, int height)
{
	g_h = 0;
	g_j = 0;
	while (g_h < height)
	{
		while (g_j != width + 1)
		{
			if (map2[g_h][g_j] != 'x' && map2[g_h][g_j] \
				!= '0' && map2[g_h][g_j] != '\n')
				map2[g_h][g_j] = '.';
			if (map2[g_h][g_j] == '0')
				map2[g_h][g_j] = 'o';
			g_j++;
		}
		g_h++;
		g_j = 0;
	}
	ft_print_map(map2, width, height);
}

void	ft_print_map(char **map2, int width, int height)
{
	g_h = 0;
	g_j = 0;
	while (g_h < height)
	{
		while (g_j <= width)
		{
			ft_putchar(map2[g_h][g_j]);
			g_j++;
		}
		g_h++;
		g_j = 0;
	}
	g_h = 0;
	while (g_h < height)
	{
		free(map2[g_h]);
		g_h++;
	}
	free(map2);
}
