/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map_modifier.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghorvath <ghorvath@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/14 16:55:43 by raho              #+#    #+#             */
/*   Updated: 2021/06/16 18:51:15 by ghorvath         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"

void		ft_remove(char *array)
{
	int		counter;

	g_index = 0;
	while (array[g_index] != '\n')
		g_index++;
	counter = g_index + 1;
	g_index = 0;
	while (array[g_index] != '\0')
	{
		array[g_index] = array[counter];
		g_index++;
		counter++;
	}
	ft_width_height(array);
}

void		ft_width_height(char *array)
{
	int		width;
	int		height;

	g_index = 0;
	width = 0;
	height = 0;
	while (array[g_index] != '\0')
	{
		if (array[g_index] == '\n')
			height++;
		width++;
		g_index++;
	}
	width = width - height;
	width = width / height;
	ft_check_height(array, width, height);
}

void		ft_check_height(char *array, int width, int height)
{
	int index;

	index = 0;
	if (height == 1)
	{
		while (array[index] != '\0')
		{
			if (array[index] == 46)
			{
				array[index] = 120;
				ft_height1_print(array);
				free(array);
				return ;
			}
			index++;
		}
	}
	if (height == 1)
		ft_height1_print(array);
	else
		ft_make2d(array, width, height);
}

void		ft_make2d(char *str, int width, int height)
{
	char	**array1;

	g_index = 0;
	g_h = 0;
	g_j = 0;
	array1 = (char **)malloc(sizeof(char *) * height);
	while (g_index < height)
	{
		array1[g_index] = (char *)malloc(sizeof(char) * width + 2);
		g_index++;
	}
	g_index = 0;
	while (g_h < height)
	{
		while (g_j <= width)
		{
			array1[g_h][g_j++] = str[g_index++];
		}
		if (g_j == width)
			array1[g_h][g_j] = '\0';
		g_h++;
		g_j = 0;
	}
	ft_copy2d(array1, width, height);
}

void		ft_copy2d(char **array1, int width, int height)
{
	char	**array2;

	g_index = 0;
	g_h = 0;
	g_j = 0;
	array2 = (char **)malloc(sizeof(char *) * height);
	while (g_index < height)
	{
		array2[g_index] = (char *)malloc(sizeof(char) * width + 2);
		g_index++;
	}
	g_index = 0;
	while (g_h < height)
	{
		while (g_j <= width)
		{
			array2[g_h][g_j] = array1[g_h][g_j];
			g_j++;
		}
		if (g_j == width)
			array2[g_h][g_j] = '\0';
		g_h++;
		g_j = 0;
	}
	ft_convert_chars(array1, array2, width, height);
}
