/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fusion_and_split_args.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enschnei <enschnei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 14:58:24 by enschnei          #+#    #+#             */
/*   Updated: 2024/03/05 16:01:33 by enschnei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int count_len_args(int ac, char **av)
{
	int i;
	int len;

	i = 1;
	len = 0;
	while (i < ac)
	{
		len = len + (ft_strlen(av[i]) + 1);
		i++;
	}
	return(len);
}

static char *join_args(int ac, char **av)
{
	int i;
	int j;
	int k;
	int len;
	char *str;

	i = 1;
	k = 0;
	len = count_len_args(ac, av);
	str = malloc (sizeof(char) * len + 1);
	if (!str)
		return(NULL);
	while (i < ac)
	{
		j = 0;
		while(av[i][j])
		{
			str[k++] = av[i][j++];
		}
		str[k++] = ' ';
		i++;
	}
	str[k] = '\0';
	// ft_printf("%s\n", str);
	return (str);
}

char **split_args(int ac, char **av)
{
	char **split;
	char *arg;
	// int i = 0;

	arg = join_args(ac, av);
	if (!arg)
	{
		free(arg);
		error_number_of_args();
	}
	split = ft_split(arg, ' ');
	// while (split[i])
    // {
    //     printf("%s\n", split[i]);
    //     i++;
    // }
	free (arg);
	return(split);
}
