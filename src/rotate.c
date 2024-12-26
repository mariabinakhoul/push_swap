/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabi-nak <mabi-nak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 12:56:24 by mabi-nak          #+#    #+#             */
/*   Updated: 2024/12/26 01:25:12 by mabi-nak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	rotate_a(t_list **a)
{
	t_list	*temp;
	t_list	*node;

	if (!*a || !(*a)->next)
		return (-1);
	temp = (*a);
	(*a) = (*a)->next;
	node = *a;
	while (node->next)
		node = node->next;
	node->next = temp;
	temp->next = NULL;
	ft_printf("ra\n");
	return (0);
}

int	rotate_b(t_list **stack_b)
{
	t_list	*temp;
	t_list	*node;

	if (!*stack_b || !(*stack_b)->next)
		return (-1);
	temp = (*stack_b);
	(*stack_b) = (*stack_b)->next;
	node = *stack_b;
	while (node->next)
		node = node->next;
	node->next = temp;
	temp->next = NULL;
	ft_printf("rb\n");
	return (0);
}

int	rotate_both(t_list **stack_a, t_list **stack_b)
{
	rotate_a(stack_a);
	rotate_b(stack_b);
	return (0);
}