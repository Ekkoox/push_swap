/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enschnei <enschnei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 12:28:16 by enschnei          #+#    #+#             */
/*   Updated: 2024/03/06 15:57:09 by enschnei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "ft_printf.h"
# include "libft.h"
# include <stdlib.h>
# include <unistd.h>

typedef struct s_swap
{
	int				nb;
	char			**split;
	struct s_swap	*next;
	struct s_swap	*prev;
}					t_swap;

int 				check_only_numbers(t_swap *swap);
void				check_empty_args(int ac, char **av);
void 				error_number_of_args();
void				error_args(t_swap *swap);
char				**split_args(int ac, char **av);

#endif