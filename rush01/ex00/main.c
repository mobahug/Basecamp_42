/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghorvath <ghorvath@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/05 17:26:45 by ghorvath          #+#    #+#             */
/*   Updated: 2021/06/06 15:46:03 by ghorvath         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ftprint(int argc, int line, int column, int nbr, char **argv);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int check_x(char **argv, int line, int num)
{
	int i;
	
	i = 0;
	while (i <= 8)
	{
		if (argv[line][i] == num + 48)
			return(1);
		i++;
	}
	return(0);
}

int check_y(char **argv, int column, int num)
{
	int i;
	
	i = 0;
	while (i <= 8)
	{
		if (argv[i][column] == num + 48)
			return(1);
		i++;
	}
	return(0);
}

int check_sq(char **argv, int line, int column, int num)
{
	int i;
	int j;

	i = line;
	while (i < line + 3)
	{
		if (line < 3)
			line = 0;
		else if (line < 6)
			line = 3;
		else
			line = 6;
		j = column;
		while (j < column +3)
		{
			if (column < 3)
				column = 0;
			else if (column < 6)
				column = 3;
			else
			column = 6;
			if (argv[line][i] == num + 48)
				return(1);
			j++;
		}
		i++;
	}
	return(0);
}

char solver(char **argv, int line, int column, int nbr)
{
	if (nbr == 10)
		return (0);
	if (argv[line][column] == '\0')
	{
		if (line == 8 && column == 9)
			return (**argv);
		line ++;
		column = 0;
	}
	while (argv[line][column] != '.')
		{
			column++;
		}
		while (argv[line][column] == '.')
		{
			if (check_x(argv, line, nbr))
			{
				if (check_y(argv, column, nbr))
				{
					if (check_sq(argv, line, column, nbr))
					{
						argv[line][column] = nbr;
						return (solver(argv,line, column++, nbr = 1));
					}
				}
			}
			else solver(argv, line, column, nbr++);
			column++;
		}
	
	return (0);
}

int		main(int argc, char **argv)
{

	int line;
	int column;
	int nbr;

	line = 0;
	column = 0;
	nbr = 1;
	

	//solver(argv, line, column, nbr);
	ftprint(argc, line, column, nbr, argv);
	return (0);
}

void	ftprint(int argc, int line, int column, int nbr, char **argv)
{
	char	*name;
	int		i;
	int		j;
	int		count;
	

	i = 1;
	while (i < argc)
	{
		j = 0;
		while (argv[i][j] != argv[i][9])
		{
			name = argv[i];
			count = 0;
			while (name[count] != '\0')
			{
				solver(argv, line, column, nbr);
				ft_putchar(name[count]);
				if (count != 8)
					ft_putchar(' ');
				count++;
			}
			ft_putchar('\n');
			i++;
		}
	}
}
