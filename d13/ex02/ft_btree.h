/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_btree.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghorvath <ghorvath@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/10 15:39:35 by ghorvath          #+#    #+#             */
/*   Updated: 2021/06/11 16:38:31 by ghorvath         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_BTREE_H
# define FT_BTREE_H

typedef	struct				s_btree
{
	struct s_btree			*left;

	struct s_btree			*right;
	void					*item;
}							t_btree;
t_btree						*btree_create_node(void *item);

#endif
