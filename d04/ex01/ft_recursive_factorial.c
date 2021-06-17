/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghorvath <ghorvath@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/28 16:53:08 by ghorvath          #+#    #+#             */
/*   Updated: 2021/05/29 18:42:36 by ghorvath         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	int i;

	i = nb;
	if (i < 0 || i > 12)
		return (0);
	if (i == 1 || i == 0)
		return (1);
	if (i > 1)
	{
		i = i * ft_recursive_factorial(i - 1);
		return (i);
	}
	return (0);
}
