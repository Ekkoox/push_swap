/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enschnei <enschnei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 16:15:30 by enschnei          #+#    #+#             */
/*   Updated: 2024/04/24 11:37:44 by enschnei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECKER_H
# define CHECKER_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 10000
# endif

# include "ft_printf.h"
# include "libft.h"
# include <stdlib.h>
# include <unistd.h>

# define INT_MIN -2147483648
# define INT_MAX 2147483647

typedef struct s_swap
{
	int				nb;
	int				cost;
	int				index;
	int				cheap_cost;
	int				above_median;
	struct s_swap	*target;
	struct s_swap	*next;
	struct s_swap	*prev;
}					t_swap;

int					search_median(t_swap *a);
int					count_arg_list(t_swap *swap);
int					check_duplicate(char **split);
int					check_max_and_min(char **split);
int					check_only_numbers(char **split);
int					check_stack_sorted(t_swap *swap);
int					check_checker(t_swap *a, t_swap *b);
int					check_command(char *checker, t_swap **a, t_swap **b);
void				set_cheap(t_swap *b);
void				top_of_a(t_swap **a);
void				free_stack(t_swap *swap);
void				error_number_of_args(void);
void				b_to_a(t_swap **a, t_swap **b);
void				get_index_list(t_swap *swap);
void				error_arguments(char **split);
void				reload_node(t_swap *a, t_swap *b);
void				check_empty_args(int ac, char **av);
void				sort_push_swap(t_swap **a, t_swap **b);
void				a_to_b(t_swap **a, t_swap **b, int median);
void				error_number_of_args_bonus(int ac, char **av);
char				**split_args(int ac, char **av);
char				*get_next_line(int fd, int error_checker);
t_swap				*min_numbers(t_swap *swap);
t_swap				*max_numbers(t_swap *swap);
t_swap				*get_cheapest(t_swap *swap);
t_swap				*found_last_list(t_swap *swap);
t_swap				*split_to_list(t_swap *swap, char **split);

/*******************COMMANDE**********************/
void				ft_sa(t_swap **a);
void				ft_sb(t_swap **b);
void				ft_ss(t_swap **a, t_swap **b);
void				ft_pa(t_swap **b, t_swap **a);
void				ft_pb(t_swap **a, t_swap **b);
void				ft_ra(t_swap **a);
void				ft_rb(t_swap **b);
void				ft_rr(t_swap **a, t_swap **b);
void				ft_rra(t_swap **a);
void				ft_rrb(t_swap **b);
void				ft_rrr(t_swap **a, t_swap **b);
/**************************************************/

#endif