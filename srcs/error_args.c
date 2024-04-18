/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_args.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enschnei <enschnei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 16:19:52 by enschnei          #+#    #+#             */
/*   Updated: 2024/04/18 16:30:01 by enschnei         ###   ########.fr       */
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

int	check_only_numbers(char **split)
{
	int	i;
	int	j;

	j = 0;
	while (split[j])
	{
		i = 0;
		if ((split[j][0] == '+' || split[j][0] == '-')
			&& (split[j][i + 1] >= '0' && split[j][i + 1] <= '9'))
			i++;
		while (split[j][i])
		{
			if (split[j][i] >= '0' && split[j][i] <= '9')
				i++;
			else if (split[j][i] == '*' || split[j][i] == '/'
				|| split[j][i] == '%')
				return (1);
			else
				return (1);
		}
		j++;
	}
	return (0);
}

int	check_duplicate(char **split)
{
	int	i;
	int	j;
	int	nb1;
	int	nb2;

	j = 0;
	while (split[j])
	{
		nb1 = ft_atoi(split[j]);
		i = j + 1;
		while (split[i])
		{
			nb2 = ft_atoi(split[i]);
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

int	check_max_and_min(char **split)
{
	int		j;
	long	nb1;

	j = 0;
	while (split[j])
	{
		if (check_looong(split[j]) == 1)
			return (1);
		nb1 = ft_atol(split[j]);
		if (nb1 < INT_MIN || nb1 > INT_MAX)
			return (1);
		j++;
	}
	return (0);
}
