/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_msg.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enschnei <enschnei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 14:14:17 by enschnei          #+#    #+#             */
/*   Updated: 2024/03/29 17:26:51 by enschnei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	error_number_of_args(void)
{
	ft_printf("!!! ERROR !!! There is no argument or empty argument !\n");
	exit(0);
}

// static void msg_error_args(t_split *swap)
// {
// 		ft_printf("!!! ERROR !!! Wrong sign before numbers !\n");
// 		ft_free(swap->split, ft_count_line_split(swap->split));
// 		exit(0);
// }

void	error_arguments(char **split)
{
	if (check_only_numbers(split) == 1)
	{
		ft_printf("!!! ERROR !!! Wrong sign before numbers !\n");
		ft_free(split, ft_count_line_split(split));
		exit(0);
	}
	if (check_only_numbers(split) == 2)
	{
		ft_printf("!!! ERROR !!! There is else than numbers or more than one sign !\n");
		ft_free(split, ft_count_line_split(split));
		exit(0);
	}
	if (check_duplicate(split) == 1)
	{
		ft_printf("!!! ERROR !!! There is the same number !\n");
		ft_free(split, ft_count_line_split(split));
		exit(0);
	}
	if (check_max_and_min(split) == 1)
	{
		ft_printf("!!! ERROR !!! Max_int or Min_int !\n");
		ft_free(split, ft_count_line_split(split));
		exit(0);
	}
	if (check_max_and_min(split) == 2)
	{
		ft_printf("!!! ERROR !!! Malloc peter !\n");
		ft_free(split, ft_count_line_split(split));
		exit(0);
	}
	if (check_max_and_min(split) == 3)
	{
		ft_printf("!!! ERROR !!! Long int !\n");
		ft_free(split, ft_count_line_split(split));
		exit(0);
	}
	else
		ft_printf("GOOD\n");
}
