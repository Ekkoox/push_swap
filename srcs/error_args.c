/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_args.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enschnei <enschnei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 16:19:52 by enschnei          #+#    #+#             */
/*   Updated: 2024/03/11 17:42:15 by enschnei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	check_empty_args(int ac, char **av)
{
	int	i;
	int	j;
	int	count;
	int	len;

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

	j = 0;
	while (swap->split[j])
	{
		i = 0;
		if ((swap->split[j][0] == '+' || swap->split[j][0] == '-')
			&& (swap->split[j][i + 1] >= '0' && swap->split[j][i + 1] <= '9'))
			i++;
		while (swap->split[j][i])
		{
			if (swap->split[j][i] >= '0' && swap->split[j][i] <= '9')
				i++;
			else if (swap->split[j][i] == '*' || swap->split[j][i] == '/'
				|| swap->split[j][i] == '%')
				return (1);
			else
				return (2);
		}
		j++;
	}
	return (0);
}

int	check_duplicate(t_swap *swap)
{
	int	i;
	int	j;
	int	nb1;
	int	nb2;

	j = 0;
	while (swap->split[j])
	{
		nb1 = ft_atoi(swap->split[j]);
		i = j + 1;
		while (swap->split[i])
		{
			nb2 = ft_atoi(swap->split[i]);
			if (nb1 == nb2)
				return (1);
			i++;
		}
		j++;
	}
	return (0);
}

// pour check 18446744073709551615
static int	check_looong(char *str)
{
	while ((*str >= 9 && *str <= 13) || *str == 32)
		str++;
	if (*str == '-' || *str == '+')
		str++;
	while (*str == '0')
		str++;
	if (ft_strlen(str) > 11)
		return (1);
	return (0);
}

int	check_max_and_min(t_swap *swap)
{
	int		j;
	long	nb1;

	j = 0;
	while (swap->split[j])
	{
		if (check_looong(swap->split[j]) == 1)
			return (3);
		nb1 = ft_atol(swap->split[j]);
		if (nb1 < INT_MIN || nb1 > INT_MAX)
			return (1);
		j++;
	}
	return (0);
}
