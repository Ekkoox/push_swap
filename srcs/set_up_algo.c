/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_up_algo.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enschnei <enschnei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/30 15:04:55 by enschnei          #+#    #+#             */
/*   Updated: 2024/04/15 15:58:20 by enschnei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rotate_up_median(t_swap *a, t_swap *b, t_swap *cheap_cost)
{
	while(!cheap_cost->index && !cheap_cost->target->index)
	{
		ft_rr(a, b);
		get_index_list(a);
		get_index_list(b);
	}
	if (!cheap_cost->index)
	{
		while(!cheap_cost->index)
		{
			ft_rb(b);
			get_index_list(b);
		}
	}
	else
	{
		
		while(!cheap_cost->target->index)
		{
			ft_ra(a);
			get_index_list(a);		
		}
	}
}

void	rotate_down_median(t_swap *a, t_swap *b, t_swap *cheap_cost)
{
	while(!cheap_cost->index && !cheap_cost->target->index)
	{
		ft_rrr(a, b);
		get_index_list(a);
		get_index_list(b);
	}
	if (!cheap_cost->index)
	{
		while(!cheap_cost->index)
		{
			ft_rrb(b);
			get_index_list(b);
		}
	}
	else
	{
		
		while(!cheap_cost->target->index)
		{
			ft_rra(a);
			get_index_list(a);		
		}
	}
}