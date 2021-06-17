/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghorvath <ghorvath@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/01 18:25:25 by ghorvath          #+#    #+#             */
/*   Updated: 2021/06/01 18:28:22 by ghorvath         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strlowcase(char *str)
{
	int i;

	i = 0;
	while (i < ft_strlen(str))
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] + 'a' - 'A';
		}
		i++;
	}
	return (str);
}
