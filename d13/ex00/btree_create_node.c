/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_create_node.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghorvath <ghorvath@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/10 15:44:57 by ghorvath          #+#    #+#             */
/*   Updated: 2021/06/12 09:05:55 by ghorvath         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_btree.h"

t_btree	*btree_create_node(void *item)
{
	t_btree *new_element;

	new_element = malloc(sizeof(*item));
	if (new_element == 0)
		return (0);
	else
	{
		new_element->left = 0;
		new_element->right = 0;
		new_element->item = item;
		return (new_element);
	}
}

#include <stdlib.h>
#include "ft_btree.h"
#include <stdio.h>

t_btree *btree_create_node(void *item);

int main ()
{
    char *p = "Fun is fun";
    t_btree *node = btree_create_node(p);

    printf("Motivation statement:        %s\n", (char *)node->item);
    printf("Should be nil/null/whaeva:    %p\n", node->left);
    printf("Should be nil/null/whaeva:    %p\n", node->right);
    return (0);
}