/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghorvath <ghorvath@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/02 16:38:22 by ghorvath          #+#    #+#             */
/*   Updated: 2021/06/03 15:47:18 by ghorvath         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int		*range;
	long	len;
	int		count;

	len = max - min;
	count = 0;
	if (min >= max || len > 2147483647)
		return (0);
	range = malloc(sizeof(*range) * len);
	while (count < len)
	{
		range[count] = min + count;
		count++;
	}
	return (range);
}
