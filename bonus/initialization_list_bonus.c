/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   initialization_list_bonus.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enschnei <enschnei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 16:06:10 by enschnei          #+#    #+#             */
/*   Updated: 2024/04/25 17:10:53 by enschnei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

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

	if (!swap)
		return ;
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

void	free_stack(t_swap *swap)
{
	t_swap	*tmp;

	while (swap)
	{
		tmp = swap;
		swap = swap->next;
		free(tmp);
	}
}
