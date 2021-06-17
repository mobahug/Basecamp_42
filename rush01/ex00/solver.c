/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solver.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jervasti <jervasti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/05 19:00:17 by jervasti          #+#    #+#             */
/*   Updated: 2021/06/05 20:16:10 by jervasti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char solver(char **av, int line, int index, int nbr)
{
	if (av[line][index] = '\0')
		line ++;
		index = 0;
	while (av[line][index] != '.')
		index++;
	if (check_x(av[line], nbr))
	{
		if (check_y(av, nbr))
		{
			if (check_sq(av, nbr))
			{
				av[line][index] = nbr;
					if(//statement for final result)
						return (**av);
				if (!(solver(av[line][index + 1], nbr == 1);
			}	
		}
	}
	else solver(av[line][index], nbr++);

	return (0);
}

/*
** return (1) if check function cant find that specific number
*/