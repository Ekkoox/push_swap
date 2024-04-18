/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_up_algo.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enschnei <enschnei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/30 15:04:55 by enschnei          #+#    #+#             */
/*   Updated: 2024/04/18 16:52:43 by enschnei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	rotate_up_median(t_swap **a, t_swap **b, t_swap *cheap_cost)
{
	while ((cheap_cost->index != 0 && cheap_cost->target->index != 0))
	{
		ft_rr(a, b);
		get_index_list(*a);
		get_index_list(*b);
	}
	if (cheap_cost->index != 0)
	{
		while (cheap_cost->index != 0)
		{
			ft_rb(b);
			get_index_list(*b);
		}
	}
	else
	{
		while (cheap_cost->target->index != 0)
		{
			ft_ra(a);
			get_index_list(*a);
		}
	}
}

static void	rotate_down_median(t_swap **a, t_swap **b, t_swap *cheap_cost)
{
	while (cheap_cost->index != 0 && cheap_cost->target->index != 0)
	{
		ft_rrr(a, b);
		get_index_list(*a);
		get_index_list(*b);
	}
	if (cheap_cost->index != 0)
	{
		while (cheap_cost->index != 0)
		{
			ft_rrb(b);
			get_index_list(*b);
		}
	}
	else
	{
		while (cheap_cost->target->index != 0)
		{
			ft_rra(a);
			get_index_list(*a);
		}
	}
}

void	rotate_b_double_a(t_swap **a, t_swap **b, t_swap *cheap_cost)
{
	while (cheap_cost->index != 0)
	{
		ft_rb(b);
		get_index_list(*b);
	}
	while (cheap_cost->target->index != 0)
	{
		ft_rra(a);
		get_index_list(*a);
	}
}

static void	double_b_rotate_a(t_swap **a, t_swap **b, t_swap *cheap_cost)
{
	while (cheap_cost->index != 0)
	{
		ft_rrb(b);
		get_index_list(*b);
	}
	while (cheap_cost->target->index != 0)
	{
		ft_ra(a);
		get_index_list(*a);
	}
}

void	b_to_a(t_swap **a, t_swap **b)
{
	t_swap	*cheap_cost;

	cheap_cost = get_cheapest(*b);
	while (cheap_cost->index != 0 || cheap_cost->target->index != 0)
	{
		if (cheap_cost->above_median == 1
			&& cheap_cost->target->above_median == 1)
			rotate_up_median(a, b, cheap_cost);
		else if (cheap_cost->above_median == 0
			&& cheap_cost->target->above_median == 0)
			rotate_down_median(a, b, cheap_cost);
		else if (cheap_cost->above_median == 1
			&& cheap_cost->target->above_median == 0)
			rotate_b_double_a(a, b, cheap_cost);
		else
			double_b_rotate_a(a, b, cheap_cost);
	}
	ft_pa(b, a);
}
