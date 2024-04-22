/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_msg_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enschnei <enschnei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 16:05:56 by enschnei          #+#    #+#             */
/*   Updated: 2024/04/22 19:50:44 by enschnei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	error_number_of_args_bonus(int ac, char **av)
{
	(void) av;
	if (ac == 1)
	{
		write(2, "Error\n", 6);
		exit(0);
	}
}

void	error_arguments(char **split)
{
	if (check_only_numbers(split) == 1)
	{
		write(2, "Error\n", 6);
		ft_free(split, ft_count_line_split(split));
		exit(0);
	}
	if (check_duplicate(split) == 1)
	{
		write(2, "Error\n", 6);
		ft_free(split, ft_count_line_split(split));
		exit(0);
	}
	if (check_max_and_min(split) == 1)
	{
		write(2, "Error\n", 6);
		ft_free(split, ft_count_line_split(split));
		exit(0);
	}
}
