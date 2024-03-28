/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enschnei <enschnei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 12:28:51 by enschnei          #+#    #+#             */
/*   Updated: 2024/03/28 15:23:00 by enschnei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	displayList_a_before(t_swap *swap) 
{
	while (swap) 
	{
		printf("Au debut a = %d\n", swap->nb);
		swap = swap->next;
	}
}

void	displayList_b_before(t_swap *swap) 
{
	while (swap) 
	{
		printf("Au debut b = %d\n", swap->nb);
		swap = swap->next;
	}
}

void	displayList_a(t_swap *swap) 
{
	while (swap) 
	{
		printf("a = %d\n", swap->nb);
		swap = swap->next;
	}
}

void	displayList_b(t_swap *swap) 
{
	while (swap) 
	{
		printf("b = %d\n", swap->nb);
		swap = swap->next;
	}
}

int	main(int ac, char **av)
{
	t_swap	swap;
	t_swap	*a;
	t_swap	*b;

	a = NULL;
	b = NULL;
	if (ac == 1)
		error_number_of_args();
	swap.split = split_args(ac, av);
	if (!swap.split)
		return (0);
	error_arguments(&swap);
	a = split_to_list(a, swap.split);
	free(a);
	free(b);
	ft_free(swap.split, ft_count_line_split(swap.split));
	return (0);
}
