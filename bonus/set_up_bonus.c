/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_up_bonus.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enschnei <enschnei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 16:13:56 by enschnei          #+#    #+#             */
/*   Updated: 2024/04/22 19:57:25 by enschnei         ###   ########.fr       */
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
	if (!swap)
		return (1);
	while(swap->next)
	{
		if (swap->nb > swap->next->nb)
			return (0);
		swap = swap->next;
	}
	return (1);
}

t_swap	*get_cheapest(t_swap *swap)
{
	while (swap)
	{
		if (swap->cheap_cost == 1)
			return (swap);
		swap = swap->next;
	}
	return (NULL);
}

int check_checker(t_swap *a, t_swap *b)
{
	if (check_stack_sorted(a) == 1 && count_arg_list(b) == 0)
		return (free_stack(a), free_stack(b), write(2, "OK\n", 3));
	return (free_stack(a), free_stack(b), write(2, "KO\n", 3));
}