/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghorvath <ghorvath@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/07 14:45:22 by ghorvath          #+#    #+#             */
/*   Updated: 2021/06/09 08:58:42 by ghorvath         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

#include <stdio.h>
#include <unistd.h>


void ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_putnbr(int nb)
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
	return (0);
}

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int i;
	int *array;

	i = 0;
	array = malloc(sizeof(*array) * length);
	while (i <= length)
	{
		array[i] = f(tab[i]);
		i++;
	}
	return (array);
}

int main()
{
	int tab[9];
	int i;
	int j;
	
	j = 0;
	i = 48;
	while (i <= 57)
	{
		tab[j] = i;
		i++;
		j++;
	}
	ft_map(tab, 10, &ft_putnbr);
}