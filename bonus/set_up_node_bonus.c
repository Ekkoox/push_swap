/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_up_node_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 16:06:43 by enschnei          #+#    #+#             */
/*   Updated: 2024/04/20 01:52:17 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	get_index_list(t_swap *swap)
{
	int	i;
	int	middle;

	if (!swap)
		return ;
	i = 0;
	middle = count_arg_list(swap) / 2;
	while (swap)
	{
		swap->index = i;
		if (i <= middle)
			swap->above_median = 1;
		else
			swap->above_median = 0;
		swap = swap->next;
		i++;
	}
}

void	get_target(t_swap *a, t_swap *b)
{
	t_swap	*tmp_a;
	t_swap	*target;
	long	max_nb;

	while (b)
	{
		max_nb = INT_MAX;
		tmp_a = a;
		while (tmp_a)
		{
			if (tmp_a->nb > b->nb && tmp_a->nb < max_nb)
			{
				max_nb = tmp_a->nb;
				target = tmp_a;
			}
			tmp_a = tmp_a->next;
		}
		if (max_nb == INT_MAX)
			b->target = min_numbers(a);
		else
			b->target = target;
		b = b->next;
	}
}

void	b_cost(t_swap *a, t_swap *b)
{
	int	len_a;
	int	len_b;

	len_a = count_arg_list(a);
	len_b = count_arg_list(b);
	while (b)
	{
		b->cost = b->index;
		if (!(b->above_median))
			b->cost = len_b - b->index;
		if (b->target->above_median)
			b->cost += b->target->index;
		else
			b->cost += len_a - b->target->index;
		b = b->next;
	}
}

void	set_cheap(t_swap *b)
{
	int		cheap;
	t_swap	*tmp_b;

	cheap = b->cost;
	tmp_b = b;
	tmp_b->cheap_cost = 1;
	b = b->next;
	while (b)
	{
		b->cheap_cost = 0;
		if (b->cost < cheap)
		{
			tmp_b->cheap_cost = 0;
			tmp_b = b;
			cheap = b->cost;
			tmp_b->cheap_cost = 1;
		}
		b = b->next;
	}
}

void	reload_node(t_swap *a, t_swap *b)
{
	get_index_list(a);
	get_index_list(b);
	get_target(a, b);
	b_cost(a, b);
	set_cheap(b);
}
