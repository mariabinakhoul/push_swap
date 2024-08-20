/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabi-nak <mabi-nak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/13 08:43:13 by mabi-nak          #+#    #+#             */
/*   Updated: 2024/06/18 08:52:01 by mabi-nak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(char const *str, int c)
{
	size_t	len;

	len = ft_strlen(str);
	if ((char)c == '\0' && str[len] == '\0')
		return ((char *)&str[len]);
	while (len > 0)
	{
		if (str[len - 1] == (char)c)
			return ((char *)&str[len - 1]);
		len--;
	}
	if (str[0] == (char)c)
		return ((char *)str);
	return (NULL);
}
