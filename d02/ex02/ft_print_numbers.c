/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghorvath <ghorvath@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/26 15:24:52 by ghorvath          #+#    #+#             */
/*   Updated: 2021/05/27 11:17:50 by ghorvath         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar (char c);

void	ft_print_numbers(void)
{
	char o;

	o = '0';
	while (o <= '9')
	{
		ft_putchar(o);
		o++;
	}
	ft_putchar('\n');
}
