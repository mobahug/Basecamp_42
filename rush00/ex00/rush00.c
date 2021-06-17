/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghorvath <ghorvath@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/29 13:03:05 by lonnguye          #+#    #+#             */
/*   Updated: 2021/05/30 15:02:21 by ghorvath         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	horizon_line(int x, char head, char body, char tail)
{
	int i;

	i = 1;
	while (i <= x)
	{
		if (i == 1)
			ft_putchar(head);
		else if (i > 1 && i < x)
			ft_putchar(body);
		else if (i == x)
			ft_putchar(tail);
		i++;
	}
}

void	rush(int x, int y)
{
	int i;

	i = 1;
	while (i <= y)
	{
		if (i == 1)
			horizon_line(x, 'o', '-', 'o');
		else if (i > 1 && i < y)
			horizon_line(x, '|', ' ', '|');
		else if (i == y)
			horizon_line(x, 'o', '-', 'o');
		ft_putchar('\n');
		i++;
	}
}
