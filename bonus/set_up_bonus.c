/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_up_bonus.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 16:14:10 by enschnei          #+#    #+#             */
/*   Updated: 2024/04/20 02:29:17 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

int	check_command (char *checker, t_swap **a, t_swap **b)
{
	if (ft_strcmp(checker, "sa\n") == 0)
		return(ft_sa(a), 0);
	else if (ft_strcmp(checker, "sb\n") == 0)
		return(ft_sb(b), 0);
	else if (ft_strcmp(checker, "ss\n") == 0)
		return(ft_ss(a, b), 0);
	else if (ft_strcmp(checker, "pa\n") == 0)
		return(ft_pa(b, a), 0);
	else if (ft_strcmp(checker, "pb\n") == 0)
		return(ft_pb(a, b), 0);
	else if (ft_strcmp(checker, "ra\n") == 0)
		return(ft_ra(a), 0);
	else if (ft_strcmp(checker, "rb\n") == 0)
		return(ft_rb(b), 0);
	else if (ft_strcmp(checker, "rr\n") == 0)
		return(ft_rr(a, b), 0);
	else if (ft_strcmp(checker, "rra\n") == 0)
		return(ft_rra(a), 0);
	else if (ft_strcmp(checker, "rrb\n") == 0)
		return(ft_rrb(b), 0);
	else if (ft_strcmp(checker, "rrr\n") == 0)
		return(ft_rrr(a, b), 0);
	return (1);
}

int check_stack_sorted(t_swap *swap)
{
	while(swap->next)
	{
		if (swap->next > swap->next->nb)
			return (1);
		swap = swap->next;
	}
	return (0);
}