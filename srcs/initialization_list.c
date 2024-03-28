/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   initialization_list.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enschnei <enschnei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 15:42:00 by enschnei          #+#    #+#             */
/*   Updated: 2024/03/28 14:31:44 by enschnei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_swap	*found_last_list(t_swap *swap)
{
	if (!swap)
		return (NULL);
	while (swap->next)
		swap = swap->next;
	return (swap);
}

static void	add_node(t_swap **swap, int nb)
{
	t_swap	*node;
	t_swap	*last;

	node = malloc(sizeof(t_swap));
	if (!node)
		return ;
	node->next = NULL;
	node->nb = nb;
	if (!(*swap))
	{
		*swap = node;
		node->prev = NULL;
	}
	else
	{
		last = found_last_list(*swap);
		last->next = node;
		node->prev = last;
	}
}
t_swap	*split_to_list(t_swap *swap, char **split)
{
	int	j;

	j = 0;
	while (split[j])
	{
		add_node(&swap, ft_atoi(split[j]));
		j++;
	}
	return (swap);
}
