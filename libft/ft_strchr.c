/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabi-nak <mabi-nak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 14:57:36 by mabi-nak          #+#    #+#             */
/*   Updated: 2024/06/18 09:40:42 by mabi-nak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	while (*str != '\0')
	{
		if (*str == (char)c)
			return ((char *)str);
		str++;
	}
	if ((char )c == '\0')
		return ((char *)str);
	return (NULL);
}

// #include <stdio.h> 
// #include <string.h> 
// int main() { 
//     char str[] = "Hello, world!"; 
//     char *ptr = strchr(str, 'l'); 

//     if (ptr != NULL) { 
//         printf("'%c' found at position %ld.\n", *ptr, ptr - str); 
//     } else { 
//         printf("'%c' not found.\n", 'o'); 
//     } 

//     return 0; 
// }
