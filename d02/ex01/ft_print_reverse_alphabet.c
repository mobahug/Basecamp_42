/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghorvath <ghorvath@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/26 14:28:25 by ghorvath          #+#    #+#             */
/*   Updated: 2021/05/27 11:17:43 by ghorvath         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar (char c);

void	ft_print_reverse_alphabet(void)
{
	char o;

	o = 'z';
	while (o >= 'a')
	{
		ft_putchar(o);
		o--;
	}
	ft_putchar('\n');
}
