/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghorvath <ghorvath@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/01 07:22:39 by ghorvath          #+#    #+#             */
/*   Updated: 2021/06/04 06:08:48 by ghorvath         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int i;
	int j;
	int tracker;

	i = 0;
	j = 0;
	tracker = 0;
	while (str[i] != '\0')
	{
		if (str[i] == to_find[j])
		{
			tracker = i;
			while (str[i] == to_find[j] && to_find[j] != '\0')
			{
				i++;
				j++;
			}
			if (to_find[j] == '\0')
				return (&str[tracker]);
			j = 0;
		}
		i++;
	}
	return (0);
}
