/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enschnei <enschnei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/29 17:15:45 by enschnei          #+#    #+#             */
/*   Updated: 2024/03/29 17:15:45 by enschnei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	swap_list(t_swap **swap)
{
	int	tmp;

	if (!*swap || !(*swap)->next)
		return (0);
	tmp = (*swap)->nb;
	(*swap)->nb = (*swap)->next->nb;
	(*swap)->next->nb = tmp;
	return (1);
}

void	ft_sa(t_swap **a)
{
	if (swap_list(a) == 1)
		ft_printf("sa\n");
}

void	ft_sb(t_swap **b)
{
	if (swap_list(b) == 1)
		ft_printf("sb\n");
}

void	ft_ss(t_swap **a, t_swap **b)
{
	if (swap_list(a) == 1 && swap_list(b) == 1)
		ft_printf("ss\n");
}
