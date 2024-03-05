/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enschnei <enschnei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 12:28:16 by enschnei          #+#    #+#             */
/*   Updated: 2024/03/05 15:14:02 by enschnei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "ft_printf.h"
# include "libft.h"
# include <stdlib.h>
# include <unistd.h>

// typedef struct s_swap
// {
// 	int nb;
// 	struct s_swap *next;
// 	struct s_swap *prev;
// }	t_swap;

char **split_args(int ac, char **av);
int count_len_args(int ac, char **av);
void error_number_of_args();

#endif