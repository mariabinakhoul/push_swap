/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabi-nak <mabi-nak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 15:37:24 by mabi-nak          #+#    #+#             */
/*   Updated: 2024/08/19 11:31:15 by mabi-nak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	push(t_list **src, t_list **dest)
{
	t_list	*tmp;
	t_list	*head_src;
	t_list	*head_dest;

	if (ft_lstsize(*src) == 0)
		return (-1);
	head_dest = (*dest);
	head_src = (*src);
	tmp = head_src;
	head_src = head_src -> next;
	(*src) = head_src;
	if (head_dest == NULL)
	{
		head_dest = tmp;
		head_dest -> next = NULL;
		*dest = head_dest;
	}
	else
	{
		tmp -> next = head_dest;
		(*dest) = tmp;
	}
	return (0);
}

int	push_a_to_b(t_list **stack_a, t_list **stack_b)
{
	if (push(stack_a, stack_b) == -1)
		return (-1);
	push(stack_a, stack_b);
	ft_printf("pb\n");
	return (0);
}

int	push_b_to_a(t_list **stack_a, t_list **stack_b)
{
	if (push(stack_b, stack_a) == -1)
		return (-1);
	push(stack_b, stack_a);
	ft_printf("pa\n");
	return (0);
}
