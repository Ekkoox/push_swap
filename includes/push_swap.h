/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 12:28:16 by enschnei          #+#    #+#             */
/*   Updated: 2024/03/13 16:14:24 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "ft_printf.h"
# include "libft.h"
# include <stdlib.h>
# include <unistd.h>

# define INT_MIN -2147483648
# define INT_MAX 2147483647

typedef struct s_swap
{
	int				nb;
	char			**split;
	struct s_swap	*next;
	struct s_swap	*prev;
}					t_swap;


int					check_duplicate(t_swap *swap);
int					check_max_and_min(t_swap *swap);
int					check_only_numbers(t_swap *swap);
void				print_swap(t_swap **swap);
void				error_number_of_args(void);
void				error_arguments(t_swap *swap);
void				add_node(t_swap **swap, int nb);
void				check_empty_args(int ac, char **av);
char				**split_args(int ac, char **av);

#endif