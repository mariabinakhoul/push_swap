/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabi-nak <mabi-nak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 13:07:48 by mabi-nak          #+#    #+#             */
/*   Updated: 2024/12/26 01:57:04 by mabi-nak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	reverse_rotate_a(t_list **a)
{
	t_list	*temp;
	t_list	*node;

	node = *a;
	while (node->next->next)
		node = node->next;
	temp = node->next;
	node->next = NULL;
	temp->next = *a;
	(*a) = temp;
	ft_printf("rra\n");
	return (0);
}

int	reverse_rotate_b(t_list **stack_b)
{
	t_list	*temp;
	t_list	*node;

	node = *stack_b;
	while (node->next->next)
		node = node->next;
	temp = node->next;
	node->next = NULL;
	temp->next = *stack_b;
	(*stack_b) = temp;
	ft_printf("rrb\n");
	return (0);
}

int	reverse_rotate_both(t_list **stack_a, t_list **stack_b)
{
	reverse_rotate_a(stack_a);
	reverse_rotate_b(stack_b);
	return (0);
}
