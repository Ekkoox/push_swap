/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enschnei <enschnei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 16:13:15 by enschnei          #+#    #+#             */
/*   Updated: 2024/03/13 16:13:15 by enschnei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int push_list_a(t_swap **a, t_swap **b)
{
	if (!*a)
		return (0);
	*b = *a;
	*a = (*a)->next;
	(*a)->prev = NULL;
	return (1);
}

static int push_list_b(t_swap **a, t_swap **b)
{
	if (!*a || !*b)
		return (0);
	return (1);
}

void ft_pa(t_swap **a, t_swap **b)
{
	if (push_list_a(a, b) == 1)
		ft_printf("pa\n");
}

void ft_pb(t_swap **a, t_swap **b)
{
	if (push_list_b(a, b) == 1)	
		ft_printf("pb\n");
}
