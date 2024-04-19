/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_bonus.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enschnei <enschnei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 16:06:49 by enschnei          #+#    #+#             */
/*   Updated: 2024/04/19 16:06:49 by enschnei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	swap_list(t_swap **swap)
{
	int	tmp;

	if (!swap)
		return ;
	tmp = (*swap)->nb;
	(*swap)->nb = (*swap)->next->nb;
	(*swap)->next->nb = tmp;
}

void	ft_sa(t_swap **a)
{
	swap_list(a);

}

void	ft_sb(t_swap **b)
{
	swap_list(b);
}

void	ft_ss(t_swap **a, t_swap **b)
{
	swap_list(a);
	swap_list(b);
}
