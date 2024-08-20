/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabi-nak <mabi-nak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 13:07:48 by mabi-nak          #+#    #+#             */
/*   Updated: 2024/08/19 11:31:24 by mabi-nak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	reverse_rotate(t_list **stack)
{
	t_list	*head;
	t_list	*tail;

	if (ft_lstsize(*stack) < 2)
		return (-1);
	head = (*stack);
	tail = ft_lstlast(head);
	while (head)
	{
		if (head->next->next == NULL)
		{
			head->next = NULL;
			break ;
		}
		head = head->next;
	}
	tail->next = (*stack);
	*stack = tail;
	return (0);
}

int	reverse_rotate_a(t_list **stack_a)
{
	if (reverse_rotate(stack_a) == -1)
		return (-1);
	reverse_rotate(stack_a);
	printf("rra\n");
	return (0);
}
