/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabi-nak <mabi-nak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 16:24:24 by mabi-nak          #+#    #+#             */
/*   Updated: 2024/08/19 11:40:44 by mabi-nak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(int))
{
	t_list	*c;

	if (!lst || !del)
		return ;
	while (*lst)
	{
		c = (*lst)-> next;
		del((*lst)-> content);
		free(*lst);
		*lst = c;
	}
	*lst = NULL;
}
