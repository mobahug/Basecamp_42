/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghorvath <ghorvath@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/02 12:41:49 by ghorvath          #+#    #+#             */
/*   Updated: 2021/06/02 15:58:03 by ghorvath         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void		ft_putchar(char c);

int			main(int argc, char **argv)
{
	int		ac;
	int		count;
	char	*n;

	ac = 1;
	while (ac < argc)
	{
		n = argv[ac];
		count = 0;
		while (n[count] != '\0')
			ft_putchar(n[count++]);
		ft_putchar('\n');
		ac++;
	}
	return (0);
}
