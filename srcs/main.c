/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enschnei <enschnei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 12:28:51 by enschnei          #+#    #+#             */
/*   Updated: 2024/04/05 19:33:01 by enschnei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	displaylist_a_before(t_swap *swap)
{
	while (swap)
	{
		printf("Au debut a = %d\n", swap->nb);
		swap = swap->next;
	}
}

void	displaylist_b_before(t_swap *swap)
{
	while (swap)
	{
		printf("Au debut b = %d\n", swap->nb);
		swap = swap->next;
	}
}

void	displaylist_a(t_swap *swap)
{
	while (swap)
	{
		printf("a = %d\n", swap->nb);
		swap = swap->next;
	}
}

void	displaylist_b(t_swap *swap)
{
	while (swap)
	{
		printf("b = %d\n", swap->nb);
		swap = swap->next;
	}
}

int	main(int ac, char **av)
{
	char 	**split;
	t_swap	*a;
	t_swap	*b;

	a = NULL;
	b = NULL;
	if (ac == 1)
		error_number_of_args();
	split = split_args(ac, av);
	if (!split)
		return (0);
	error_arguments(split);
	a = split_to_list(a, split);
	sort_push_swap(&a, &b);
	displaylist_a(a);
	displaylist_b(b);
	free_stack(a);
	free_stack(b);
	ft_free(split, ft_count_line_split(split));
	return (0);
}
