/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cat.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghorvath <ghorvath@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/10 10:05:03 by ghorvath          #+#    #+#             */
/*   Updated: 2021/06/10 14:58:43 by ghorvath         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>
#define BUFFER_SIZE 30

void error_handling(int *str)
{
	int i;

	i = 0;

	while (str[i])
	{
		write(2, &str[i], 1);
		i++;
	}
}

void		display_file(int fd)
{
	char	buffer;

	while (read(fd, &buffer, 1) != 0)
	{
		write(1, &buffer, 1);
	}
}

int			main(int argc, char **argv)
{
	int fd;


	while (i < argc)
	{
		fd = open(argv[i], O_RDONLY);
		while

	}
	if (fd == -1)
	{
		write(2, "open() error\n", 13);
		return (1);
	}
	display_file(fd);
	if (close(fd) == -1)
	{
		write(2, "close() error\n", 14);
		return (1);
	}
	return (0);
}