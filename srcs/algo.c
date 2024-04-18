/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enschnei <enschnei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/30 11:22:02 by enschnei          #+#    #+#             */
/*   Updated: 2024/04/18 16:51:53 by enschnei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_swap	*get_cheapest(t_swap *swap)
{
	while (swap)
	{
		if (swap->cheap_cost == 1)
			return (swap);
		swap = swap->next;
	}
	return (NULL);
}

static void	sort_three(t_swap **a)
{
	if ((*a)->nb > (*a)->next->nb && (*a)->nb > (*a)->next->next->nb)
		ft_ra(a);
	if ((*a)->nb < (*a)->next->nb && (*a)->next->nb > (*a)->next->next->nb)
	{
		ft_rra(a);
		ft_sa(a);
	}
	if ((*a)->nb > (*a)->next->nb)
		ft_sa(a);
	if ((*a)->next->nb > (*a)->next->next->nb)
		ft_rra(a);
}

static void	sort_to_b(t_swap **a, t_swap **b)
{
	int	len;
	int	median;

	median = ((max_numbers(*a)->nb + min_numbers(*a)->nb) / 2);
	len = count_arg_list(*a);
	while (count_arg_list(*a) > 3)
	{
		a_to_b(a, b, median);
		len--;
	}
	sort_three(a);
	while (count_arg_list(*b) > 0)
	{
		reload_node(*a, *b);
		b_to_a(a, b);
	}
	get_index_list(*a);
	top_of_a(a);
}

void	sort_push_swap(t_swap **a, t_swap **b)
{
	if (count_arg_list(*a) == 1)
		return ;
	if (count_arg_list(*a) == 2)
	{
		if ((*a)->nb > (*a)->next->nb)
			ft_sa(a);
	}
	else if (count_arg_list(*a) == 3)
		sort_three(a);
	else
		sort_to_b(a, b);
}
