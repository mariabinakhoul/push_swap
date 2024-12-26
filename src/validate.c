/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validate.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabi-nak <mabi-nak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 11:29:17 by mabi-nak          #+#    #+#             */
/*   Updated: 2024/12/26 06:30:43 by mabi-nak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"

int	is_number(char *str)
{
	int	i;

	i = 0;
	if (str[0] == '-')
		i++;
	while (str[i])
	{
		if (str[i] >= '0' && str[i] <= '9')
			i++;
		else
			return (0);
	}
	return (1);
}

int	is_duplicate(char **arg, int nb, int i)
{
	i += 1;
	while (arg[i])
	{
		if (ft_atoi(arg[i]) == nb)
			return (1);
		i++;
	}
	return (0);
}

int	is_sorted(t_list **nb)
{
	t_list	*check;

	check = (*nb);
	while (check && check->next)
	{
		if (check->content > check->next->content)
			return (0);
		check = check->next;
	}
	return (1);
}
