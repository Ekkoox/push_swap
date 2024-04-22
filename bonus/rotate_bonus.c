/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_bonus.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enschnei <enschnei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 13:23:44 by enschnei          #+#    #+#             */
/*   Updated: 2024/04/22 16:24:36 by enschnei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

static void	rotate_list(t_swap **swap)
{
	t_swap	*last;

	if (!*swap)
		return ;
	last = found_last_list(*swap);
	last->next = *swap;
	*swap = (*swap)->next;
	(*swap)->prev = NULL;
	last->next->prev = last;
	last->next->next = NULL;
}

void	ft_ra(t_swap **a)
{
	rotate_list(a);

}

void	ft_rb(t_swap **b)
{
	rotate_list(b);
}

void	ft_rr(t_swap **a, t_swap **b)
{
	rotate_list(a);
	rotate_list(b);
}
