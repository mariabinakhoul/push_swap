/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabi-nak <mabi-nak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 12:50:09 by mabi-nak          #+#    #+#             */
/*   Updated: 2024/12/26 06:28:37 by mabi-nak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include "../libft/libft.h"
# include <stdbool.h>
# include <unistd.h>
# include <limits.h>
# include <stdlib.h>

void	del(int content);
void	set_sorted_index(t_list **stack_a);
int		is_number(char *str);
int		is_duplicate(char **arg, int nb, int i);
int		is_sorted(t_list **nb);
int		push(t_list **src, t_list **dest);
int		push_a_to_b(t_list **a, t_list **b);
int		push_b_to_a(t_list **a, t_list **b);
int		reverse_rotate_a(t_list **a);
int		reverse_rotate_b(t_list **stack_b);
int		reverse_rotate_both(t_list **stack_a, t_list **stack_b);
int		rotate_b(t_list **stack_b);
int		rotate_a(t_list **a);
int		rotate_both(t_list **stack_a, t_list **stack_b);
int		swap_a(t_list **a);
int		swap_b(t_list **stack_b);
int		swap_both(t_list **stack_a, t_list **stack_b);
void	fill_stack(t_list *input);
void	init_push_swap(int argc, char **argv, t_list **a);
void	init_stack(int nb, t_list **stack, int i, int argc);
void	init_sort(t_list **stack_a, t_list **stack_b);
void	ft_sort_three(t_list **a);
int		get_min(t_list **stack);
void	ft_sort_four(t_list **stack_a, t_list **stack_b);
void	ft_sort_five(t_list **stack_a, t_list **stack_b);
void	radix_sort(t_list **stack_a, t_list **stack_b, int *j);
void	index_stack(t_list *stack);
t_list	*find_min_unindexed(t_list *stack);
void	give_new_index(t_list **a);
t_list	*merge(t_list *left_stack, t_list *right_stack);
void	half_split(t_list *head, t_list **left_stack, t_list **right_stack);

#endif