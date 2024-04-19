/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_bonus.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enschnei <enschnei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 16:06:56 by enschnei          #+#    #+#             */
/*   Updated: 2024/04/19 16:06:58 by enschnei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_swap	*max_numbers(t_swap *swap)
{
	int		high;
	int		tmp;
	t_swap	*number_max;

	high = swap->nb;
	number_max = swap;
	while (swap)
	{
		tmp = swap->nb;
		if (tmp > high)
		{
			high = tmp;
			number_max = swap;
		}
		swap = swap->next;
	}
	return (number_max);
}

t_swap	*min_numbers(t_swap *swap)
{
	int		low;
	int		tmp;
	t_swap	*number_min;

	low = swap->nb;
	number_min = swap;
	while (swap)
	{
		tmp = swap->nb;
		if (tmp < low)
		{
			low = tmp;
			number_min = swap;
		}
		swap = swap->next;
	}
	return (number_min);
}

int	count_arg_list(t_swap *swap)
{
	int	len;

	if (!swap)
		return (0);
	len = 0;
	while (swap)
	{
		swap = swap->next;
		len++;
	}
	return (len);
}

void	a_to_b(t_swap **a, t_swap **b, int median)
{
	if ((*a)->nb > median)
	{
		ft_pb(a, b);
		ft_rb(b);
	}
	else
		ft_pb(a, b);
}

void	top_of_a(t_swap **a)
{
	t_swap	*min_a;

	min_a = min_numbers(*a);
	while (min_a->index != 0)
	{
		if (min_a->above_median == 1)
		{
			ft_ra(a);
			get_index_list(*a);
		}
		else
		{
			ft_rra(a);
			get_index_list(*a);
		}
	}
}
