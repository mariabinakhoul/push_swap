/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabi-nak <mabi-nak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 12:51:53 by mabi-nak          #+#    #+#             */
/*   Updated: 2024/12/26 04:37:47 by mabi-nak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	init_push_swap(int argc, char **argv, t_list **a)
{
	int	i;
	int	nbr;

	if (argc == 2)
	{
		argv = ft_split(argv[1], ' ');
		i = 0;
	}
	else
		i = 1;
	while (argv[i])
	{
		nbr = ft_atoi(argv[i]);
		if (!is_number(argv[i]))
			exit (1);
		if (is_duplicate(argv, nbr, i))
			exit (1);
		init_stack(nbr, a, i, argc);
		if (argc == 2)
			free(argv[1]);
		i++;
	}
	if (argc == 2)
		free (argv);
}

void	init_stack(int nb, t_list **stack, int i, int argc)
{
	t_list	*new;

	if (argc == 2)
		new = ft_lstnew(nb, i);
	else
		new = ft_lstnew(nb, i - 1);
	ft_lstadd_back(stack, new);
}

void	init_sort(t_list **stack_a, t_list **stack_b)
{
	int	size;
	int	i;

	i = 0;
	if (is_sorted(stack_a) || ft_lstsize(*stack_a) == 0
		|| ft_lstsize(*stack_a) == 1)
		return ;
	size = ft_lstsize(*stack_a);
	if (size == 2)
		swap_a(stack_a);
	else if (size == 3)
		ft_sort_three(stack_a);
	else if (size == 4)
		ft_sort_four(stack_a, stack_b);
	else if (size == 5)
		ft_sort_five(stack_a, stack_b);
	else if (size > 5)
	{
		radix_sort(stack_a, stack_b, &i);
	}
}
