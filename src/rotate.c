/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabi-nak <mabi-nak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 12:56:24 by mabi-nak          #+#    #+#             */
/*   Updated: 2024/08/19 12:17:16 by mabi-nak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	rotate(t_list **stack)
{
	t_list	*head;
	t_list	*tail;

	if (ft_lstsize(*stack) < 2)
		return (-1);
	head = *stack;
	tail = ft_lstlast(head);
	*stack = head -> next;
	head -> next = NULL;
	tail -> next = head;
	return (0);
}

int	rotate_a(t_list **stack_a)
{
	if (rotate(stack_a) == -1)
		return (-1);
	rotate(stack_a);
	ft_printf("ra\n");
	return (0);
}