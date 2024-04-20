/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_bonus.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 12:28:51 by enschnei          #+#    #+#             */
/*   Updated: 2024/04/20 02:34:54 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

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
		return (write(2, "ERROR\n", 6), NULL));
	error_arguments(split);
	a = split_to_list(a, split);
	while(1)
	{
		checker = get_next_line(0, 0);
		if (checker, &a, &b)
			return (free_stack(a), free_stack(b), free(checker),
					get_next_line(0, 1), write(2, "ERROR\n", 6));
	}
	if (check_stack_sorted(a) == 1 && count_len_args(b) == 0)
		return (free_stack(a), free_stack(b), write(2, "OK\n", 3)); 
	else
		(return (free_stack(a), free_stack(b), write(2, "KO\n", 3)))
	ft_free(split, ft_count_line_split(split));
	return (0);
}
