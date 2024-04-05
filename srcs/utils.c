/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enschnei <enschnei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 15:43:31 by enschnei          #+#    #+#             */
/*   Updated: 2024/04/05 19:08:37 by enschnei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_swap *max_numbers(t_swap *swap)
{
	int high;
	int tmp;
	t_swap *number_max;
	
	high = swap->nb;
	number_max = swap;
	while(swap)
	{
		tmp = swap->nb;
		if (tmp > high)
		{
			high = tmp;	
			number_max = swap;
		}
		swap = swap->next;
	}
	return(number_max);
}

t_swap *min_numbers(t_swap *swap)
{
	int low;
	int tmp;
	t_swap *number_min;
	
	low = swap->nb;
	number_min = swap;
	while(swap)
	{
		tmp = swap->nb;
		if (tmp < low)
		{
			low = tmp;	
			number_min = swap;
		}
		swap = swap->next;
	}
	return(number_min);
}

int	count_arg_list(t_swap *swap)
{
	int	len;

	len = 0;
	while (swap)
	{
		swap = swap->next;
		len++;
	}
	return (len);
}

