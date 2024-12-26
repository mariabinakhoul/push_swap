/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabi-nak <mabi-nak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 15:37:24 by mabi-nak          #+#    #+#             */
/*   Updated: 2024/12/10 20:42:25 by mabi-nak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	push_a_to_b(t_list **a, t_list **b)
{
	t_list	*node_a;

	if (!*a)
		return (-1);
	node_a = *a;
	(*a) = node_a->next;
	node_a->next = NULL;
	node_a->next = (*b);
	(*b) = node_a;
	ft_printf("pb\n");
	return (0);
}

int	push_b_to_a(t_list **a, t_list **b)
{
	t_list	*node_b;

	if (!*b)
		return (-1);
	node_b = *b;
	(*b) = node_b->next;
	node_b->next = NULL;
	node_b->next = (*a);
	(*a) = node_b;
	ft_printf("pa\n");
	return (0);
}
