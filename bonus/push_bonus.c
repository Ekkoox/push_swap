/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_bonus.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enschnei <enschnei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 16:06:20 by enschnei          #+#    #+#             */
/*   Updated: 2024/04/19 16:06:20 by enschnei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

static void	ft_push(t_swap **a, t_swap **b)
{
	t_swap	*push_node;

	if (!*a)
		return ;
	push_node = (*a);
	(*a) = (*a)->next;
	if (*a)
		(*a)->prev = NULL;
	if (!*b)
	{
		*b = push_node;
		push_node->next = NULL;
	}
	else
	{
		push_node->next = *b;
		push_node->next->prev = push_node;
		*b = push_node;
	}
}

void	ft_pa(t_swap **b, t_swap **a)
{
	ft_push(b, a);
}

void	ft_pb(t_swap **a, t_swap **b)
{
	ft_push(a, b);
}
