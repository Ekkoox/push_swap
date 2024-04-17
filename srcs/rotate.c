/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enschnei <enschnei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 13:23:44 by enschnei          #+#    #+#             */
/*   Updated: 2024/04/16 18:40:15 by enschnei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	rotate_list(t_swap **swap)
{
	t_swap	*last;

	if (!*swap)
		return (0);
	last = found_last_list(*swap);
	last->next = *swap;
	*swap = (*swap)->next;
	(*swap)->prev = NULL;
	last->next->prev = last;
	last->next->next = NULL;
	return (1);
}

void	ft_ra(t_swap **a)
{
	if (rotate_list(a) == 1)
		ft_printf("ra\n");
}

void	ft_rb(t_swap **b)
{
	if (rotate_list(b) == 1)
		ft_printf("rb\n");
}

void	ft_rr(t_swap **a, t_swap **b)
{
	if (rotate_list(a) == 1 && rotate_list(b) == 1)
		ft_printf("rr\n");
}
