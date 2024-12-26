/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabi-nak <mabi-nak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 15:32:55 by mabi-nak          #+#    #+#             */
/*   Updated: 2024/12/10 19:20:43 by mabi-nak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	del(int content)
{
	content -= content;
}

void	set_sorted_index(t_list **stack_a)
{
	(void)stack_a;
}

int	get_min(t_list **stack)
{
	int		min;
	int		index;
	t_list	*tmp;

	tmp = (*stack);
	min = INT_MAX;
	while (tmp != NULL)
	{
		if (tmp->content < min)
		{
			min = tmp->content;
			index = tmp->index;
		}
		tmp = tmp->next;
	}
	return (index);
}

void	give_new_index(t_list **a)
{
	t_list	*temp;
	int		i;

	i = 0;
	temp = *a;
	while (temp)
	{
		temp->index = i;
		i++;
		temp = temp->next;
	}
}
