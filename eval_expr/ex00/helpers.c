/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   helpers.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghorvath <ghorvath@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/13 20:06:22 by ghorvath          #+#    #+#             */
/*   Updated: 2021/06/13 20:09:34 by ghorvath         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"

void		ft_putchar(char c)
{
	write(1, &c, 1);
}

void		ft_putstr(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

void		ft_putnbr(int nb)
{
	long	a;

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

int			operators(char op)
{
	double	num1;
	double	num2;
	char	op;

	if (op == '+')
		num1 + num2;
	else if (op == '-')
		num1 - num2;
	else if (op == '/')
		num1 / num2;
	else if (op == '*')
		num1 * num2;
	else
		ft_putstr("Invalid Operator");
}
