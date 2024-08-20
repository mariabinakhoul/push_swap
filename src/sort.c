/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabi-nak <mabi-nak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 16:20:25 by mabi-nak          #+#    #+#             */
/*   Updated: 2024/08/20 13:24:57 by mabi-nak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ft_sort_three(t_list **stack)
{
	t_list	*tail;
	t_list	*head;
	t_list	*mid;

	head = *stack;
	mid = head->next;
	tail = ft_lstlast(*stack);
	if ((head->content > mid->content) && (head->content < tail->content))
		swap_a(stack);
	if ((head->content > mid->content) && (head->content > tail->content))
	{
		swap_a(stack);
		reverse_rotate_a(stack);
	}
	if ((head->content > mid->content) && (mid->content < tail->content))
		rotate_a(stack);
	if ((head->content < mid->content) && (head->content < tail->content))
	{
		swap_a(stack);
		rotate_a(stack);
	}
	if ((head->content < mid->content) && (head->content > tail->content))
		reverse_rotate_a(stack);
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
	ft_sort_four(stack_a, stack_b);
	push_b_to_a(stack_a, stack_b);
}

static int	get_max_bits(t_list **stack)
{
	t_list	*head;
	int		max;
	int		max_bits;

	head = *stack;
	max = head->index;
	max_bits = 0;
	while (head)
	{
		if (head->index > max)
			max = head->index;
		head = head->next;
	}
	while ((max >> max_bits) != 0)
		max_bits++;
	return (max_bits);
}

void	radix_sort(t_list **stack_a, t_list **stack_b)
{
	t_list	*head_a;
	int		i;
	int		j;
	int		size;
	int		max_bits;

	i = 0;
	head_a = *stack_a;
	size = ft_lstsize(head_a);
	max_bits = get_max_bits(stack_a);
	while (i < max_bits)
	{
		j = 0;
		while (j++ < size)
		{
			head_a = (*stack_a);
			if (((head_a->index >> i) & 1) == 1)
				rotate_a(stack_a);
			else
				push_b_to_a(stack_a, stack_b);
		}
		while (ft_lstsize(*stack_b) != 0)
			push_a_to_b(stack_a, stack_b);
		i++;
	}
}