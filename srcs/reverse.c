/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enschnei <enschnei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 13:23:51 by enschnei          #+#    #+#             */
/*   Updated: 2024/04/17 15:33:50 by enschnei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	reverse_list(t_swap **swap)
{
	t_swap	*last;

	if (!*swap || !(*swap)->next)
		return (0);
	last = found_last_list(*swap);
	last->prev->next = NULL;
	last->next = *swap;
	last->prev = NULL;
	*swap = last;
	last->next->prev = last;
	return (1);
}

void	ft_rra(t_swap **a)
{
	if (reverse_list(a) == 1)
		ft_printf("rra\n");
}

void	ft_rrb(t_swap **b)
{
	if (reverse_list(b) == 1)
		ft_printf("rrb\n");
}

void	ft_rrr(t_swap **a, t_swap **b)
{
	if (reverse_list(a) == 1 && reverse_list(b) == 1)
		ft_printf("rrr\n");
}

// si swap->next == swap->prev un seul element dans la list