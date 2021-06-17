/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sastantua.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghorvath <ghorvath@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/29 13:25:45 by ghorvath          #+#    #+#             */
/*   Updated: 2021/05/30 20:35:32 by ghorvath         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c)

void	level(int size)
{
	int i;
	int j;
	int height;
	int width;

	height = size;
	i = 0;
	while (i < height)
	{
		j = 0;
		while (j < height - 1 - i)
		{
			ft_putchar(' ');
			j++;
		}
		ft_putchar('/');
		width = (i - 1) + 2 * (1 + (3 + i) + ((i % 2) + (i / 3)));
		while (j < width)
		{
			ft_putchar('*');
			j++;
		}
		ft_putchar('\\');
		ft_putchar('\n');
		i++;
	}
}
