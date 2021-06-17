/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghorvath <ghorvath@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/02 13:12:54 by ghorvath          #+#    #+#             */
/*   Updated: 2021/06/04 16:23:31 by ghorvath         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
	return (i);
}

char	*ft_strdup(char *src)
{
	char *newstring;

	newstring = malloc(sizeof(*src) * (ft_strlen(src) + 1));
	if (newstring == NULL)
		return (NULL);
	while (*src != '\0')
	{
		*newstring = *src;
		src++;
	}
	*newstring = '\0';
	return (newstring);
}

int        main(int argc, char **argv)
{
    char    *str;
    char    *str2;

    if (argc != 2)
    {
        ft_putstr("Too many arguments, only give one string.");
        ft_putchar('\n');
        return (0);
    }
    str = ft_strdup(argv[1]);
    str2 = strdup(argv[1]);
    ft_putstr(str);
    ft_putchar('\n');
    ft_putstr(str2);
    ft_putchar('\n');
    return(0);
}