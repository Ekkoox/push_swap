/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_msg_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 16:05:56 by enschnei          #+#    #+#             */
/*   Updated: 2024/04/20 01:51:44 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

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
