/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabi-nak <mabi-nak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 12:37:49 by mabi-nak          #+#    #+#             */
/*   Updated: 2024/06/17 12:20:20 by mabi-nak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	const unsigned char	*s;

	s = (const unsigned char *)str;
	while (n--)
	{
		if (*s == (unsigned char) c)
			return ((void *)s);
		s++;
	}
	return (NULL);
}

// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>
// int main()
// {
//     const char *str = "Hello, world!";
//     char search_char = 'o';
//     size_t search_len = strlen(str);
//     void *result = memchr(str, search_char, search_len);
//     printf("'%c' at %ld\n", search_char, (char *)result - str);
//     return 0;
// }