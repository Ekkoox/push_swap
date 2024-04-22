/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_bonus.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enschnei <enschnei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 16:15:19 by enschnei          #+#    #+#             */
/*   Updated: 2024/04/22 20:01:20 by enschnei         ###   ########.fr       */
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
	error_number_of_args_bonus(ac, av);
	split = split_args(ac, av);
	if (!split)
		return (write(2, "ERROR\n", 6));
	error_arguments(split);
	a = split_to_list(a, split);
	ft_free(split, ft_count_line_split(split));
	while (1)
	{
		checker = get_next_line(0, 0);
		if (checker == 0)
			break ;
		if (check_command(checker, &a, &b))
			return (free_stack(a), free_stack(b), free(checker),
				get_next_line(0, 1), write(2, "ERROR\n", 6));
		free (checker);
	}
	check_checker(a, b);
}
