/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_front.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghorvath <ghorvath@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/08 18:59:45 by ghorvath          #+#    #+#             */
/*   Updated: 2021/06/09 10:39:59 by ghorvath         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_push_front(t_list **begin_list, void *data)
{
	t_list	*new_element;

	if (*begin_list)
	{
		new_element = ft_create_elem(data);
		new_element->next = *begin_list;
		*begin_list = new_element;
	}
	else
		*begin_list = ft_create_elem(data);
}
