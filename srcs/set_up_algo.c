/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_up_algo.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enschnei <enschnei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/30 15:04:55 by enschnei          #+#    #+#             */
/*   Updated: 2024/04/05 19:32:51 by enschnei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void sort_to_b(t_swap **a, t_swap **b)
{
	int len;
	int median;

	median = ((max_numbers(*a)->nb + min_numbers(*a)->nb) / 2);
	ft_printf("%d\n", median);
	len = count_arg_list(*a);
	while(count_arg_list(*a) > 3)
	{
		if ((*a)->nb > median)
		{
			ft_pb(a, b);
			ft_rb(b);
		}
		else
			ft_pb(a, b);
	}	
	sort_three(a);
}

void get_index_list(t_swap *swap)
{
	int i;

	i = 0;
	while(swap)
	{
		swap->index = i;
		i++;
		swap = swap->next;
		// ft_printf("l'index vaut = %d\n", i);
	}
}