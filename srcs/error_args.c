/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_args.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enschnei <enschnei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 16:19:52 by enschnei          #+#    #+#             */
/*   Updated: 2024/03/06 15:57:47 by enschnei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void check_empty_args(int ac, char **av)
{
	int	i;
	int	j;
	int count;
	int len;
	(void)ac;

	j = 0;
	while (av[j])
	{
		i = 0;
		count = 0;
		len = ft_strlen(av[j]);
		while (av[j][i])
		{
			if (av[j][i] == ' ')
				count++;
			i++;
		}
		if (count == len)
			error_number_of_args();
		j++;
	}
}

int	check_only_numbers(t_swap *swap)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (swap->split[j])
	{
		while (swap->split[j][i])
		{
			if ((swap->split[j][i] >= '0' && swap->split[j][i] <= '9')
				|| swap->split[j][i] == '+' || swap->split[j][i] == '-')
				i++;
			else if (swap->split[j][i] == '*' || swap->split[j][i] == '/'
				|| swap->split[j][i] == '%')
				return (1);
			else
				return (2);
		}
		i = 0;
		j++;
	}
	return (0);
}
