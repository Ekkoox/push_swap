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
/*   Created: 2024/03/13 16:13:15 by enschnei          #+#    #+#             */
/*   Updated: 2024/03/13 16:13:15 by enschnei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"


static int	push_list_to_a(t_swap **a, t_swap **b)
{
	t_swap *tmp;

	if (!*a)
		return (0);
	tmp = *a;
	*a = *b;
	*b = (*b)->next;
	if (!tmp)
		(*a)->next = NULL;
	else 
		(*a)->next = tmp;
	return (1);
}

static int	push_list_to_b(t_swap **a, t_swap **b)
{
	t_swap *tmp;

	if (!*a)
		return (0);
	tmp = *b;
	*b = *a;
	*a = (*a)->next;
	if (!tmp)
		(*b)->next = NULL;
	else 
		(*b)->next = tmp;
	return (1);
}

void	ft_pa(t_swap **a, t_swap **b)
{
	if (push_list_to_a(a, b) == 1)
		ft_printf("pa\n");
}

void	ft_pb(t_swap **a, t_swap **b)
{	
	if (push_list_to_b(a, b) == 1)
		ft_printf("pb\n");
}
