/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enschnei <enschnei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/30 11:22:02 by enschnei          #+#    #+#             */
/*   Updated: 2024/04/12 18:14:06 by enschnei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_three(t_swap **a)
{
	if ((*a)->nb > (*a)->next->nb && (*a)->nb > (*a)->next->next->nb)
		ft_ra(a);
	if ((*a)->nb < (*a)->next->nb && (*a)->next->nb > (*a)->next->next->nb)
	{
		ft_rra(a);
		ft_sa(*a);
	}
	if ((*a)->nb > (*a)->next->nb)
		ft_sa(*a);
	if ((*a)->next->nb > (*a)->next->next->nb)
		ft_rra(a);
}

void sort_to_b(t_swap **a, t_swap **b)
{
	int len;
	int median;

	median = ((max_numbers(*a)->nb + min_numbers(*a)->nb) / 2); // a ameliorer
	len = count_arg_list(*a);
	while(len-- > 3)
		a_to_b(a, b, median);
	sort_three(a);
	while(*b)
	{
		reload_node(*a, *b);
		b_to_a(*a, *b);
	}
}

void	sort_push_swap(t_swap **a, t_swap **b)
{
	if (count_arg_list(*a) == 2)
	{
		if ((*a)->nb > (*a)->next->nb)
			ft_sa(*a);
	}
	else if (count_arg_list(*a) == 3)
		sort_three(a);
	else
		sort_to_b(a, b);
}
