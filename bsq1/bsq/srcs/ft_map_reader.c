/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map_reader.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raho <raho@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/14 09:21:42 by ghorvath          #+#    #+#             */
/*   Updated: 2021/06/16 10:39:05 by raho             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"

void	ft_convert_chars(char **array1, char **array2, int width, int height)
{
	g_h = 0;
	g_j = 0;
	while (g_h < height)
	{
		while (g_j != width + 1)
		{
			if (array1[g_h][g_j] == '.')
			{
				array1[g_h][g_j] = 49;
				array2[g_h][g_j] = 49;
			}
			else if (array1[g_h][g_j] == 'o')
			{
				array1[g_h][g_j] = 48;
				array2[g_h][g_j] = 48;
			}
			g_j++;
		}
		g_h++;
		g_j = 0;
	}
	g_h = 1;
	g_j = 1;
	ft_check_map(array1, array2, width, height);
}

void	ft_check_map(char **map1, char **map2, int width, int height)
{
	int	minimum;
	int	result;

	result = 0;
	while (g_h < height)
	{
		while (g_j < width)
		{
			if (map1[g_h][g_j] == 48)
				map1[g_h][g_j] = 48;
			else if (map1[g_h][g_j] > 48)
			{
				minimum = ft_minimum(map2);
				map2[g_h][g_j] = 49 + (minimum - 48);
			}
			if (map2[g_h][g_j] > result)
				result = (map2[g_h][g_j]);
			g_j++;
		}
		g_h++;
		g_j = 1;
	}
	g_result = result;
	ft_free_map1(map1, height);
	ft_change_map(map2, width, height);
}

void	ft_free_map1(char **map1, int height)
{
	g_h = 0;
	while (g_h < height)
	{
		free(map1[g_h]);
		g_h++;
	}
	free(map1);
}

int		ft_minimum(char **map2)
{
	int minimum;
	int result;

	if (map2[g_h - 1][g_j] < map2[g_h - 1][g_j - 1])
		result = map2[g_h - 1][g_j];
	else
		result = map2[g_h - 1][g_j - 1];
	if (map2[g_h][g_j - 1] < result)
		minimum = map2[g_h][g_j - 1];
	else
		minimum = result;
	return (minimum);
}
