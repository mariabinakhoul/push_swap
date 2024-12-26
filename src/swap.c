/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabi-nak <mabi-nak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 11:58:39 by mabi-nak          #+#    #+#             */
/*   Updated: 2024/12/26 00:56:49 by mabi-nak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	swap_a(t_list **a)
{
	t_list	*temp1;
	t_list	*temp2;

	if (!*a || !(*a)->next)
		return (-1);
	temp1 = *a;
	temp2 = (*a)->next;
	temp1->next = temp2->next;
	temp2->next = temp1;
	(*a) = temp2;
	ft_printf("sa\n");
	return (0);
}

int	swap_b(t_list **stack_b)
{
	t_list	*temp1;
	t_list	*temp2;

	if (!*stack_b || !(*stack_b)->next)
		return (-1);
	temp1 = *stack_b;
	temp2 = (*stack_b)->next;
	temp1->next = temp2->next;
	temp2->next = temp1;
	(*stack_b) = temp2;
	ft_printf("sb\n");
	return (0);
}

int	swap_both(t_list **stack_a, t_list **stack_b)
{
	swap_a(stack_a);
	swap_b(stack_b);
	return (0);
}
