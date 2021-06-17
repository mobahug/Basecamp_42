/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sudoku.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghorvath <ghorvath@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/05 18:26:50 by ghorvath          #+#    #+#             */
/*   Updated: 2021/06/06 11:04:47 by ghorvath         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
int sudoku_row(int num, int i)
{
	int j;
	int x;
	
	j = 0;
	x = 1;
	while (j < 9)
	{
		if (argv[i][j] == num)
			return false;
		j++;
	}
	return ();
}

int sudoku_col(int num, int j)
{
	int i;
	int x;

	i = 0;
	x = 1;
	while (i < 9)
	{
		if (argv[i][j] == num)
			return (0);
		i++;
	}
	return (x);
}
*/

#include <stdio.h>
#include <unistd.h>

int sudoku_row(int x, int y, int num)
{
	int i;
	
	i = 0;
	while (i <= 8)
	{
		if (argv[x][i] == num)
			return(1);
		i++;
	}
	return(0);
}

int sudoku_col(int x, int y, int num)
{
	int i;
	
	i = 0;
	while (i <= 8)
	{
		if (argv[i][y] == num)
			return(1);
		i++;
	}
	return(0);
}

int sudoku_square(int x, int y, int num)
{
	int i;
	int j;

	i = x;
	while (i < x + 3)
	{
		if (x < 3)
			x = 0;
		else if (x < 6)
			x = 3;
		else
			x = 6;
		j = y;
		while (j < y +3)
		{
			if (y < 3)
				y = 0;
			else if (y < 6)
				y = 3;
			else
			y = 6;
			if (argv[x][i] == num)
				return(1);
			j++;
		}
		i++;
	}
	return(0);
}
