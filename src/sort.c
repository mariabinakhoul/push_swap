/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabi-nak <mabi-nak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 16:20:25 by mabi-nak          #+#    #+#             */
/*   Updated: 2024/12/26 09:14:26 by mabi-nak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ft_sort_three(t_list **a)
{
	if ((*a)->next->content > (*a)->content
		&& (*a)->next->content > (*a)->next->next->content
		&& (*a)->next->next->content > (*a)->content)
	{
		reverse_rotate_a(a);
		swap_a(a);
	}
	else if ((*a)->next->content > (*a)->content
		&& (*a)->next->content > (*a)->next->next->content
		&& (*a)->content > (*a)->next->next->content)
		reverse_rotate_a(a);
	else if ((*a)->next->content < (*a)->content
		&& (*a)->next->content < (*a)->next->next->content
		&& (*a)->content > (*a)->next->next->content)
		rotate_a(a);
	else if ((*a)->next->content < (*a)->content
		&& (*a)->next->content > (*a)->next->next->content
		&& (*a)->next->next->content < (*a)->content)
	{
		swap_a(a);
		reverse_rotate_a(a);
	}
	else if ((*a)->next->content < (*a)->content
		&& (*a)->next->next->content > (*a)->content)
		swap_a(a);
}

void	ft_sort_four(t_list **stack_a, t_list **stack_b)
{
	int	the_index;

	the_index = get_min(stack_a);
	if (the_index == 1)
		swap_a(stack_a);
	if (the_index == 2)
	{
		rotate_a(stack_a);
		swap_a(stack_a);
	}
	if (the_index == 3)
		reverse_rotate_a(stack_a);
	push_a_to_b(stack_a, stack_b);
	if (!is_sorted(stack_a))
		ft_sort_three(stack_a);
	push_b_to_a(stack_a, stack_b);
}

void	ft_sort_five(t_list **stack_a, t_list **stack_b)
{
	int	the_index;

	the_index = get_min(stack_a);
	if (the_index == 1)
		swap_a(stack_a);
	if (the_index == 2)
	{
		rotate_a(stack_a);
		swap_a(stack_a);
	}
	if (the_index == 3)
	{
		reverse_rotate_a(stack_a);
		reverse_rotate_a(stack_a);
	}
	if (the_index == 4)
		reverse_rotate_a(stack_a);
	push_a_to_b(stack_a, stack_b);
	give_new_index(stack_a);
	ft_sort_four(stack_a, stack_b);
	push_b_to_a(stack_a, stack_b);
}

// void assign_index(t_list **stack_a, t_list **copy_a)
// {
// 	t_list *tmp;
// 	t_list *cpy_tmp;

// 	tmp = *stack_a;
// 	while (stack_a)
// 	{
// 		p
// 	}
// }

void	radix_sort(t_list **stack_a, t_list **stack_b, int *j)
{
	int	i;
	int	size_a;
	int	size_b;

	i = 0;
	size_a = ft_lstsize(*stack_a);
	size_b = ft_lstsize(*stack_b);
	while (i < size_a)
	{
		if ((((*stack_a)->index >> *j) & 1) == 1)
			rotate_a(stack_a);
		else
			push_a_to_b(stack_a, stack_b);
		i++;
	}
	while (size_b != 0)
		push_b_to_a(stack_a, stack_b);
	*j = *j +1;
	if (!is_sorted(stack_a))
		radix_sort(stack_a, stack_b, j);
}



// void	radix_sort(t_list **stack_a, t_list **stack_b, int *j)
// {
// 	int	i;
// 	int	size_a;
// 	int	size_b;

// 	i = 0;
// 	size_a = ft_lstsize(*stack_a);
// 	size_b = ft_lstsize(*stack_b);
// 	while (i < size_a)
// 	{
// 		if ((((*stack_a)->index >> *j) & 1) == 1)
// 			rotate_a(stack_a);
// 		else
// 			push_a_to_b(stack_a, stack_b);
// 		i++;
// 	}
// 	while (size_b != 0)
// 		push_b_to_a(stack_a, stack_b);
// 	*j = *j +1;
// 	if (!is_sorted(stack_a))
// 		radix_sort(stack_a, stack_b, j);
// }



// t_list	*find_min_unindexed(t_list *stack)
// {
// 	t_list	*min_node;
// 	t_list	*current;
// 	int		min_value;

// 	min_node = NULL;
// 	current = stack;
// 	min_value = INT_MAX;
// 	while (current != NULL)
// 	{
// 		if (current->index == -1 && current->content < min_value)
// 		{
// 			min_value = current->content;
// 			min_node = current;
// 		}
// 		current = current->next;
// 	}
// 	return (min_node);
// }

// void	index_stack(t_list *stack)
// {
// 	t_list	*current;
// 	int		index;

// 	index = 0;
// 	current = stack;
// 	while (current != NULL)
// 	{
// 		current->index = -1;
// 		current = current->next;
// 	}
// 	current = find_min_unindexed(stack);
// 	while (current != NULL)
// 	{
// 		current->index = index++;
// 		current = find_min_unindexed(stack);
// 	}
// }

// int	get_max_bits(t_list **stack)
// {
// 	t_list	*head;
// 	int		max;
// 	int		max_bits;

// 	head = *stack;
// 	max = head->index;
// 	max_bits = 0;
// 	while (head)
// 	{
// 		if (head->index > max)
// 			max = head->index;
// 		head = head->next;
// 	}
// 	while ((max >> max_bits) != 0)
// 		max_bits ++;
// 	return (max_bits);
// }

// void	radix_sort(t_list **stack_a, t_list **stack_b)
// {
// 	t_list	*head_a;
// 	int		i;
// 	int		j;
// 	int		size;
// 	int		max_bits;

// 	i = 0;
// 	head_a = *stack_a;
// 	size = ft_lstsize(head_a);
// 	max_bits = get_max_bits(stack_a);
// 	while (i < max_bits)
// 	{
// 		j = 0;
// 		while (j++ < size)
// 		{
// 			head_a = *stack_a;
// 			if (((head_a->index >> i) & 1) == 1)
// 				rotate_a(stack_a);
// 			else
// 				push_a_to_b(stack_a, stack_b);
// 		}
// 		while (ft_lstsize(*stack_b) != 0)
// 			push_b_to_a(stack_a, stack_b);
// 		i++;
// 	}
// }
