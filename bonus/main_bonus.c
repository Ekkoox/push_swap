/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_bonus.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enschnei <enschnei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 12:28:51 by enschnei          #+#    #+#             */
/*   Updated: 2024/04/19 19:16:08 by enschnei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char **av)
{
	char	**split;
	char	*checker;
	t_swap	*a;
	t_swap	*b;

	a = NULL;
	b = NULL;
	if (ac == 1)
		error_number_of_args();
	split = split_args(ac, av);
	if (!split)
		return (write(2, "ERROR\n", 6));
	error_arguments(split);
	a = split_to_list(a, split);
	while(a)
	{
		if (checker, &a, &b)
			return(1);
	}
	free_stack(a);
	free_stack(b);
	ft_free(split, ft_count_line_split(split));
	return (0);
}
