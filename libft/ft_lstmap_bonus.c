/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabi-nak <mabi-nak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 17:00:39 by mabi-nak          #+#    #+#             */
/*   Updated: 2024/08/19 13:08:54 by mabi-nak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, int(*f)(int),
		void (*del)(int))
{
	t_list	*new;
	t_list	*mode;
	int	set;

	if (!lst || !f || !del)
		return (NULL);
	new = NULL;
	while (lst)
	{
		set = f(lst -> content);
		mode = ft_lstnew(set, 0);
		if (!mode)
		{
			del(set);
			ft_lstclear(&new, (*del));
			return (new);
		}
		ft_lstadd_back(&new, mode);
		lst = lst -> next;
	}
	return (new);
}
