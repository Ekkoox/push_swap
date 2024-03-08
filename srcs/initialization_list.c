/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   initialization_list.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enschnei <enschnei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 15:42:00 by enschnei          #+#    #+#             */
/*   Updated: 2024/03/08 18:08:23 by enschnei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	split_to_list(t_swap **stack)
{
	int j;

	j = 0;
	while (swap->split[j])
	{
		ft_atoi(swap->split[j]) = swap->next;
		j++;
	}
}