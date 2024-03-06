/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enschnei <enschnei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 12:28:51 by enschnei          #+#    #+#             */
/*   Updated: 2024/03/06 15:59:14 by enschnei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int main(int ac, char **av)
{
	t_swap swap;
	
	(void)av;
	if (ac == 1)
		error_number_of_args();
	check_empty_args(ac, av);
	swap.split = split_args(ac, av);
	error_args(&swap);
	ft_free(swap.split, ft_count_line_split(swap.split));
	return (0);
}
