/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enschnei <enschnei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/30 11:22:02 by enschnei          #+#    #+#             */
/*   Updated: 2024/04/05 19:08:45 by enschnei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_three(t_swap **a)
{
	if ((*a)->nb > (*a)->next->nb && (*a)->nb > (*a)->next->next->nb)
		ft_ra(a);
	if ((*a)->nb < (*a)->next->nb && (*a)->next->nb > (*a)->next->next->nb)
	{
		ft_printf("ZIZI\n");
		ft_rra(a);
		ft_sa(*a);
	}
	if ((*a)->nb > (*a)->next->nb)
	{
		ft_printf("Yo\n");
		ft_sa(*a);
	}
	if ((*a)->next->nb > (*a)->next->next->nb)
		ft_rra(a);
}

// void	sort_push_swap(t_swap **a)
// {
// 	if (count_arg_list(*a) == 2)
// 	{
// 		if ((*a)->nb > (*a)->next->nb)
// 			ft_sa(*a);
// 	}
// 	else if (count_arg_list(*a) == 3)
// 		sort_three(a);
// }

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
