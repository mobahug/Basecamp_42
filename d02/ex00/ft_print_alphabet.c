/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghorvath <ghorvath@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/26 07:23:03 by ghorvath          #+#    #+#             */
/*   Updated: 2021/05/27 11:00:19 by ghorvath         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar (char c);

void	ft_print_alphabet(void)
{
	char o;

	o = 'a';
	while (o <= 'z')
	{
		ft_putchar(o);
		o++;
	}
	ft_putchar('\n');
}
