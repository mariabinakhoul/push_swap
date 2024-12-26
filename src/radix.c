/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabi-nak <mabi-nak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/26 09:12:44 by mabi-nak          #+#    #+#             */
/*   Updated: 2024/12/26 09:14:34 by mabi-nak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"


t_list	*merge(t_list *left_stack, t_list *right_stack)
{
	t_list	*res;

	if (!left_stack)
		return (right_stack);
	if (!right_stack)
		return (left_stack);
	if (left_stack->content <= right_stack->content)
	{
		res = left_stack;
		res->next = merge(left_stack->next, right_stack);
	}
	else
	{
		res = right_stack;
		res->next = merge(left_stack, right_stack->next);
	}
	return (res);
}


void	half_split(t_list *head, t_list **left_stack, t_list **right_stack)
{
	t_list	*slow;
	t_list	*fast;

	if (!head || !head->next)
	{
		*left_stack = head;
		*right_stack = NULL;
	}
	else
	{
		slow = head;
		fast = head->next;
		while (fast)
		{
			fast = fast->next;
			if (fast)
			{
				slow = slow->next;
				fast = fast->next;
			}
		}
		*left_stack = head;
		*right_stack = slow->next;
		slow->next = NULL;
	}
}
