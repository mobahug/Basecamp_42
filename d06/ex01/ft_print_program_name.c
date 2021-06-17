/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghorvath <ghorvath@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/01 20:49:44 by ghorvath          #+#    #+#             */
/*   Updated: 2021/06/02 13:02:56 by ghorvath         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		main(int argc, char **argv)
{
	int		count;
	int		i;
	char	*n;

	count = 0;
	n = argv[0];
	while (n[count] != '\0')
		ft_putchar(n[count++]);
	ft_putchar('\n');
	return (0);
}
