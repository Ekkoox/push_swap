/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_msg.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enschnei <enschnei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 14:14:17 by enschnei          #+#    #+#             */
/*   Updated: 2024/04/25 17:58:33 by enschnei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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
