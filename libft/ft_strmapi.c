/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabi-nak <mabi-nak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 08:22:06 by mabi-nak          #+#    #+#             */
/*   Updated: 2024/06/18 09:41:29 by mabi-nak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	i;
	char	*str;

	if (!s)
		return (NULL);
	str = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!str)
		return (NULL);
	i = 0;
	while (*(s + i))
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}

// #include <stdio.h>
// #include <stdlib.h>
// char upper_case(unsigned int index, char c) {
//     // Convert c to uppercase if it's a lowercase letter
//     if (c >= 'a' && c <= 'z') {
//         return c - 'a' + 'A';
//     } else {
//         return c;
//     }
// }

// int main() 
// {
//     char const *s = "Hello, world!";
//     char *transformed;

//     transformed = ft_strmapi(s, &upper_case);

//     if (transformed) {
//         printf("Original string: \"%s\"\n", s);
//         printf("Transformed string: \"%s\"\n", transformed);
//         free(transformed); // Free allocated memory
//     } else {
//         printf("Error: Memory allocation failed or input string is NULL.\n");
//     }

//     return 0;
// }