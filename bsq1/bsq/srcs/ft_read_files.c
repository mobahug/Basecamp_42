/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_read_files.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghorvath <ghorvath@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/14 09:04:28 by raho              #+#    #+#             */
/*   Updated: 2021/06/16 20:00:14 by ghorvath         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"

void		ft_read_files(char *map)
{
	int		fd;
	int		ret;
	char	buf[1];
	char	*array;

	array = malloc(sizeof(char));
	g_index = 0;
	fd = open(map, O_RDONLY);
	if (fd == -1)
		ft_open_error();
	while ((ret = read(fd, buf, 1)))
	{
		array[g_index] = (char)malloc(sizeof(char) + 1);
		array[g_index] = *buf;
		g_index++;
	}
	if (ret == -1)
		ft_read_error();
	array[g_index] = '\0';
	if (close(fd) == -1)
		ft_close_error();
	if (ft_invalid_map(array))
		return ;
	ft_remove(array);
}

int			ft_open_error(void)
{
	ft_putstr("Couldn't open the file.\n");
	return (0);
}

int			ft_read_error(void)
{
	ft_putstr("Couldn't read the file.\n");
	return (0);
}

int			ft_close_error(void)
{
	ft_putstr("Couldn't close the file.\n");
	return (0);
}
