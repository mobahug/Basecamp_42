/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghorvath <ghorvath@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/04 08:00:33 by ghorvath          #+#    #+#             */
/*   Updated: 2021/06/04 20:01:47 by ghorvath         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int world_counter(char *str)
{
	int count;
	int world;
	
	count = 0;
	if (!str)
		return (0);
	while (*str != '\0')
	{
		if (*str == '\n' || *str == '\t' || *str == ' ')
			world = 0;
		else if (world == 0)
		{
			world = 1;
			count++;
		}
		str++;
	}
	return (count);
}

int world_length(char *str, int i)
{
	int length;
	
	length = 0;
	while (str[i] != '\0' && str[i] != '\n' && str[i] != '\t' && str[i] != ' ')
	{
		length++;
		i++;
	}
	return (length);
}

char **ft_split_whitespaces(char *str)
{
	char **dest;
	int i;
	int j;
	int o;
	int count;
	
	i = 0;
	j = 0;
	count = 0;
	dest = (char**)malloc(sizeof(char*) * world_counter(str) + 1);
	while (str[i] != '\0')
}
