/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghorvath <ghorvath@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/03 06:27:34 by ghorvath          #+#    #+#             */
/*   Updated: 2021/06/04 16:58:09 by ghorvath         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

#include <unistd.h>
#include <string.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

void	ft_putnbr(int nb)
{
	long a;

	a = nb;
	if (nb < 0)
	{
		ft_putchar('-');
		a *= -1;
	}
	if (a < 10)
	{
		ft_putchar(a + 48);
	}
	else
	{
		ft_putnbr(a / 10);
		ft_putchar(a % 10 + 48);
	}
}

int	ft_ultimate_range(int **range, int min, int max)
{
	int		*array;
	long	len;
	int		count;

	len = max - min;
	count = 0;
	if (len <= 0 || len > 2147483647 || min >= max)
	{
		*range = 0;
		return (0);
	}
	array = (int*)malloc(sizeof(array) * len);
	while (count < len)
	{
		array[count] = min + count;
		count++;
	}
	*range = array;
	return (count);
}

int        main(int argc, char **argv)
{
    int min;
    int max;
    int *range;
    int count;
    int size;

    if (argc < 3 || argc > 3)
    {
        ft_putstr("Please input only 2 integers, MIN and MAX.");
        ft_putchar('\n');
        return (0);
    }
    if (argc == 3)
    {
        min = atoi(argv[1]);
        max = atoi(argv[2]);
        count = 0;
        size = ft_ultimate_range(&range, min, max);
        ft_putnbr(size);
        ft_putchar('\n');
        while (count < (max - min))
        {
            ft_putnbr(range[count]);
            ft_putchar('\n');
            count++;
        }
    }
    return (0);
}