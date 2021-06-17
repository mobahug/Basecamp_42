/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   helpers.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghorvath <ghorvath@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/02 08:54:32 by raho              #+#    #+#             */
/*   Updated: 2021/06/16 16:02:06 by ghorvath         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"

void		ft_putchar(char c)
{
	write(1, &c, 1);
}

void		ft_putstr(char *str)
{
	int		h;

	h = 0;
	while (str[h] != '\0')
	{
		ft_putchar(str[h]);
		h++;
	}
}

char		*ft_strcpy(char *dest, char *src)
{
	int		h;

	h = 0;
	while (src[h] != '\0')
	{
		dest[h] = src[h];
		h++;
	}
	dest[h] = '\0';
	return (dest);
}

void		ft_height1_print(char *array)
{
	int		index;

	index = 0;
	while (array[index] != '\0')
	{
		ft_putchar(array[index]);
		index++;
	}
}
