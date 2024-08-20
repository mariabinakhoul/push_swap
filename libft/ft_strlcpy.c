/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabi-nak <mabi-nak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 14:16:42 by mabi-nak          #+#    #+#             */
/*   Updated: 2024/06/13 12:27:35 by mabi-nak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t n)
{
	unsigned int	i;
	unsigned int	c;

	i = 0;
	c = 0;
	while (src[c])
		c++;
	if (n < 1)
		return (c);
	while (src[i] && i < n - 1)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (c);
}

// #include <unistd.h>

// int	main(void)
// {
// 	char src[] = "Hello, world!";
// 	char dest[20];
// 	unsigned int copied;

// 	copied = ft_strlcpy(dest, src, sizeof(dest));

// 	write(1, dest, copied);
// 	return (0);
// }