/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_apply_prefix.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghorvath <ghorvath@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/10 19:14:00 by ghorvath          #+#    #+#             */
/*   Updated: 2021/06/12 09:10:15 by ghorvath         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"
#include <stdio.h>

void	btree_apply_prefix(t_btree *root, void (*applyf)(void *))
{
	if (root == 0)
		return ;
	applyf(root->item);
	btree_apply_prefix(root->left, applyf);
	btree_apply_prefix(root->right, applyf);
}

t_btree		*btree_create_node(void *item)
{
	t_btree *new;
 
	new = malloc(sizeof(t_btree));
	if (new == 0)
		return (0);
	else
	{
		new->left = 0;
		new->right = 0;
		new->item = item;
		return (new);
	}
}
 
void printtabs(int level)
{
	int counter;
 
	counter = -1;
	while (++counter < level)
		printf("\t");
}
 
 
void	print_tree(t_btree *root, int level)
{
	if (root == 0)
	{
		printtabs(level);
		printf("-Empty-\n");
	}
	else
	{
		printtabs(level);
		printf("item = %d\n", root->item);
		printtabs(level);
		printf("Left\n");
		print_tree(root->left, level + 1);
		printtabs(level);
		printf("right\n");
		print_tree(root->right, level + 1);
		printf("done\n");
	}
}
 
void print_start(t_btree *root)
{
	print_tree(root, 0);
}
void increaser(void *num)
{
	printf("%d\n", num);
}
 
int main(void)
{
	t_btree *n1 = btree_create_node(1);
	t_btree *n2 = btree_create_node(2);
	t_btree *n3 = btree_create_node(3);
	t_btree *n4 = btree_create_node(4);
	t_btree *n5 = btree_create_node(5);
	t_btree *n6 = btree_create_node(6);
	t_btree *n7 = btree_create_node(7);
 
	n1->left = n2;
	n1->right = n3;
	n2->left = n4;
	n2->right = n5;
	n3->left = n6;
	n3->right = n7;
 
	print_start(n1);
	btree_apply_prefix(n1, increaser);
	print_start(n1);
 
	return (0);
}