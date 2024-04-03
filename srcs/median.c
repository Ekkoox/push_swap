/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   median.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enschnei <enschnei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 15:43:31 by enschnei          #+#    #+#             */
/*   Updated: 2024/04/03 17:29:50 by enschnei         ###   ########.fr       */
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
			tmp = number_max;
		swap = swap->next;
	}
	printf("%d/n", number_max);
	return(number_max);
}

// int search_median(t_swap *a)
// {
// 	int median;
// 	int len;
// 	int count;
	
// 	count = len / 2;
// 	len = count_arg_list(a);
// 	median = 0;	
// 	return(median);
// }