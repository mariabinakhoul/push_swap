/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabi-nak <mabi-nak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 10:30:42 by mabi-nak          #+#    #+#             */
/*   Updated: 2024/06/13 10:08:02 by mabi-nak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	str_len(char const *str)
{
	size_t	i;

	i = 0;
	while (*(str + i))
		i++;
	return (i);
}

static char	*nvstr(size_t n)
{
	char	*str;

	str = (char *)malloc((n + 1) * sizeof(char));
	if (!str)
		return (NULL);
	return (str);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	char	*str2;

	if (!s)
		return (NULL);
	if (start > str_len(s))
		len = 0;
	else if (len > (str_len(s) - start))
		len = str_len(s) - start;
	str = nvstr(len);
	if (!str)
		return (NULL);
	s += start;
	str2 = str;
	*(str + len) = '\0';
	while (len-- && *s)
		*str++ = *s++;
	return (str2);
}

// #include <stdio.h>

// int main() {

//     const char *source = "wanna get ice cream";
//     unsigned int start_index = 6;
//     size_t length = 8;
//     char *substring = ft_substr(source, start_index, length);
//     if (substring) {
//         printf("%s\n", source);
//         printf("index %u length %zu: %s\n", start_index, length, substring);

//         free(substring);
//     } else {
//         printf("Error: Unable to extract substring.\n");
//     }

//     return 0;
// }