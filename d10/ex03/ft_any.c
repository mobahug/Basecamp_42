/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_any.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghorvath <ghorvath@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/07 18:13:47 by ghorvath          #+#    #+#             */
/*   Updated: 2021/06/09 09:18:16 by ghorvath         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int    ft_check(char *str)
{
    int i;

    i = 0;
    while (str[i])
    {
        if (str[i] == 'W')
            return (1);
        i++;
    }
    return (0);
}

int	ft_any(char **tab, int (*f)(char*))
{
	int i;

	i = 0;
	while (tab[i] != 0)
	{
		if (f(tab[i]) == 1)
			return (1);
		i++;
	}
	return (0);
}

int    main(void)
{
    char *a[3] = {"Hello", "Word!"}; 

    printf("return = %d\n", ft_any(a, ft_check));
    return (0);
}