/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_msg.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enschnei <enschnei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 14:14:17 by enschnei          #+#    #+#             */
/*   Updated: 2024/03/06 15:59:03 by enschnei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void error_number_of_args()
{
	ft_printf ("!!! ERROR !!! There is no argument or empty argument !\n");
	exit (0);
}

void error_args(t_swap *swap)
{
	if (check_only_numbers(swap) == 1)
	{
		ft_printf ("!!! ERROR !!! Wrong sign before numbers !\n");
		ft_free(swap->split, ft_count_line_split(swap->split));
		exit (0);
	}
	if (check_only_numbers(swap) == 2)
	{
		ft_printf ("!!! ERROR !!! There is else than numbers !\n");
		ft_free(swap->split, ft_count_line_split(swap->split));
		exit (0);
	}
	else
		ft_printf("GOOD\n");
}
