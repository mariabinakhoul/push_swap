/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabi-nak <mabi-nak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 13:15:04 by mabi-nak          #+#    #+#             */
/*   Updated: 2024/06/18 09:41:56 by mabi-nak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	size_t	char_verification(char const *str, char const c)
{
	size_t	i;

	i = 0;
	if (!str)
		return (0);
	while (*(str + i))
	{
		if (*(str + i) == c)
			return (1);
		i++;
	}
	return (0);
}

static char	*str_new(size_t n)
{
	char	*str;

	str = (char *)malloc((n + 1) * sizeof(char));
	if (!str)
		return (NULL);
	return (str);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*trim;
	size_t	len;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	len = ft_strlen(s1);
	if (!set || !s1)
		return (NULL);
	while (*(s1 + i) && char_verification(set, *(s1 + i)))
		i++;
	while (len > i && char_verification(set, *(s1 + (len -1))))
		len--;
	trim = str_new(len - i);
	if (!trim)
		return (NULL);
	while ((i + j) < len)
	{
		*(trim + j) = *(s1 + (i + j));
		j++;
	}
	*(trim + j) = '\0';
	return (trim);
}

// #include <stdio.h>
// #include <stdlib.h>
// int main() {
//     char const *s1 = "  hello world  ";
//     char const *set = " ";

//     printf("Original string: \"%s\"\n", s1);

//     char *trimmed = ft_strtrim(s1, set);

//     if (trimmed) {
//         printf("Trimmed string: \"%s\"\n", trimmed);
//         free(trimmed);
//     } else {
//         printf("Error: Memory allocation failed
			//  or input strings are NULL.\n");
//     }

//     return 0;
// }