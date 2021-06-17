/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_file.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghorvath <ghorvath@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/09 12:20:02 by ghorvath          #+#    #+#             */
/*   Updated: 2021/06/10 15:04:43 by ghorvath         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>

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

	if (argc != 2)
	{
		if (argc < 2)
			write(2, "File name missing.\n", 19);
		if (argc > 2)
			write(2, "Too many arguments.\n", 20);
		return (1);
	}
	fd = open(argv[1], O_RDONLY);
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
