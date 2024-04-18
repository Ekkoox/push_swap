/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_msg.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enschnei <enschnei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 14:14:17 by enschnei          #+#    #+#             */
/*   Updated: 2024/04/18 16:43:37 by enschnei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	error_number_of_args(void)
{
	write(2, "Error\n", 6);
	exit(0);
}

void	error_arguments(char **split)
{
	if (check_only_numbers(split) == 1)
	{
		write(2, "Error\n", 6);
		exit(0);
	}
	if (check_duplicate(split) == 1)
	{
		write(2, "Error\n", 6);
		exit(0);
	}
	if (check_max_and_min(split) == 1)
	{
		write(2, "Error\n", 6);
		exit(0);
	}
}
