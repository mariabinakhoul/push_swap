/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabi-nak <mabi-nak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 11:58:39 by mabi-nak          #+#    #+#             */
/*   Updated: 2024/08/19 12:17:56 by mabi-nak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	swap(t_list **stack)
{
	int		value;
	t_list	*tmp;
	t_list	*next;

	if (ft_lstsize(*stack) < 2)
		return (-1);
	tmp = (*stack);
	next = tmp -> next;
	if (tmp == NULL && next == NULL)
		exit (0);
	value = tmp -> content;
	tmp -> content = next->content;
	next -> content = value;
	return (0);
}

int	swap_a(t_list **stack_a)
{
	if (swap(stack_a) == -1)
		return (-1);
	swap(stack_a);
	ft_printf("sa\n");
}

int	swap_b(t_list **stack_b)
{
	if (swap(stack_b) == -1)
		return (-1);
	swap(stack_b);
	ft_printf("sb\n");
}

int	swap_both(t_list **stack_a, t_list **stack_b)
{
	if ((ft_lstsize(*stack_a) < 2) || (ft_lstsize(*stack_b) < 2))
		return (-1);
	swap(stack_a);
	swap(stack_b);
	ft_printf("ss\n");
	return (0);
}