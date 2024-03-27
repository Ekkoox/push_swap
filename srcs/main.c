/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enschnei <enschnei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 12:28:51 by enschnei          #+#    #+#             */
/*   Updated: 2024/03/27 19:25:49 by enschnei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	displayList(t_swap *swap) 
{
	while (swap) 
	{
		printf("%d\n", swap->nb);
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
	// ft_rra(&a);
	// ft_ra(&a);
	// ft_sa(a);
	ft_pa(&a, &b);
	// displayList(a);
	displayList(b);
	ft_free(swap.split, ft_count_line_split(swap.split));
	return (0);
}
