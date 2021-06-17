/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghorvath <ghorvath@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/31 06:34:14 by ghorvath          #+#    #+#             */
/*   Updated: 2021/06/01 15:55:58 by ghorvath         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

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
