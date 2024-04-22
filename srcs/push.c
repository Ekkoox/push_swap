/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+        
	+:+     */
/*   By: enschnei <enschnei@student.42.fr>          +#+  +:+      
	+#+        */
/*                                                +#+#+#+#+#+  
	+#+           */
/*   Created: 2024/03/29 17:15:24 by enschnei          #+#    #+#             */
/*   Updated: 2024/03/29 17:15:24 by enschnei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	ft_push(t_swap **a, t_swap **b)
{
	t_swap	*push_node;

	if (!*a)
		return (0);
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
	return (1);
}

void	ft_pa(t_swap **b, t_swap **a)
{
	if (ft_push(b, a) == 1)
		ft_printf("pa\n");
}

void	ft_pb(t_swap **a, t_swap **b)
{
	if (ft_push(a, b) == 1)
		ft_printf("pb\n");
}
