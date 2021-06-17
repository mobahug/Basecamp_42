/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghorvath <ghorvath@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/03 09:58:38 by ghorvath          #+#    #+#             */
/*   Updated: 2021/06/03 16:35:48 by ghorvath         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

int ft_strlen(int str)
{
	int i;
	
	i = 0;
	while (str[i] !='\0')
		i++;
	return(i);
}

char *ft_concat_params(int argc, char **argv)
{
	int i;
	int j;
	char *com;
	
	i = 1;
	com = argv[0];
	com =(char*)malloc(sizeof(com*) * ())
	while(i < argc)
	{
		j = 0;
		while(argv[i][j] != '\0')
		{
			ft_strlen(argv[i][j])
		}
	}
}