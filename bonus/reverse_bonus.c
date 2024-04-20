/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_bonus.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 13:23:51 by enschnei          #+#    #+#             */
/*   Updated: 2024/04/20 01:52:03 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

static void	reverse_list(t_swap **swap)
{
	t_swap	*last;

	if (!*swap || !(*swap)->next)
		return ;
	last = found_last_list(*swap);
	last->prev->next = NULL;
	last->next = *swap;
	last->prev = NULL;
	*swap = last;
	last->next->prev = last;
}

void	ft_rra(t_swap **a)
{
	reverse_list(a);
}

void	ft_rrb(t_swap **b)
{
	reverse_list(b);
}

void	ft_rrr(t_swap **a, t_swap **b)
{
	reverse_list(a);
	reverse_list(b);
}
