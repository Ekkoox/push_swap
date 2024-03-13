/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enschnei <enschnei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 15:18:51 by enschnei          #+#    #+#             */
/*   Updated: 2024/03/13 15:18:51 by enschnei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int ft_sa(t_swap **a)
{
    int tmp;

    if (!*a || !*(a)->next)
        return (NULL);
    tmp = *(a)->nb;
    *(a)->nb = *(a)->next->nb;
    *(a)->next->nb = tmp;
    return (1);
}

static int ft_sb(t_swap **b)
{
    int tmp;

    if (!*b || !*(b)->next)
        return (NULL);
    tmp = *(b)->nb;
    *(b)->nb = *(b)->next->nb;
    *(b)->next->nb = tmp;
    return (1);
}

static int ft_ss(t_swap **stack)
{
    ft_sa(a);
    ft_sb(b);
    return(1);
}

void print_swap(t_swap **swap)
{
    if (ft_sa == 1)
        ft_printf ("sa\n");
    if (ft_sb == 1)
        ft_printf ("sb\n");
    if (ft_ss == 1)
        ft_printf ("ss\n");
}

