/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_bvh.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiyan <jiyan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/03 20:30:00 by jiyawang          #+#    #+#             */
/*   Updated: 2026/03/03 20:24:56 by jiyan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bvh.h"

void	free_bvh(t_bvh_node *node)
{
	if (!node)
		return ;
	if (node->left)
		free_bvh(node->left);
	if (node->right)
		free_bvh(node->right);
	if (node->primitives)
		ft_lstclear(&node->primitives, free);
	free(node);
}
