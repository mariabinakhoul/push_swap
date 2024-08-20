/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabi-nak <mabi-nak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 14:23:44 by mabi-nak          #+#    #+#             */
/*   Updated: 2024/06/18 09:41:05 by mabi-nak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t n)
{
	size_t		dest_len;
	size_t		total_len;
	const char	*s;

	dest_len = 0;
	s = src;
	while (dest_len < n && dest[dest_len] != '\0')
		dest_len++;
	total_len = dest_len + ft_strlen(s);
	if (dest_len < n)
	{
		while (*s && (dest_len + 1) < n)
		{
			*(dest + dest_len) = *s++;
			dest_len++;
		}
		*(dest + dest_len) = '\0';
	}
	return (total_len);
}

// #include <stdio.h>
// #include <stddef.h>
// int main() {
//     char dest[] = "Hello";
//     const char src[] = " !";
//     size_t n = sizeof(dest);
//     size_t result = ft_strlcat(dest, src, n);

//     printf("Concatenated String: %s\n", dest);
//     printf("Length of Concatenated String: %zu\n", result);

//     return 0;
// }
