/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabi-nak <mabi-nak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 08:50:51 by mabi-nak          #+#    #+#             */
/*   Updated: 2024/08/19 12:33:17 by mabi-nak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_words(char const *str, char c)
{
	size_t	count;
	size_t	i;

	count = 0;
	i = 0;
	while (*(str + i))
	{
		if (*(str + i) != c)
		{
			count++;
			while (*(str + i) && *(str + i) != c)
				i++;
		}
		else if (*(str + i) == c)
			i++;
	}
	return (count);
}

static size_t	get_word_len(char const *str, char c)
{
	size_t	i;

	i = 0;
	while (*(str + i) && *(str + i) != c)
		i++;
	return (i);
}

static char	**split(char const *s1, char c, char **s2, size_t words_count)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (i < words_count)
	{
		while (*(s1 + j) && *(s1 + j) == c)
			j++;
		*(s2 + i) = ft_substr(s1, j, get_word_len(&*(s1 + j), c));
		while (*(s1 + j) && *(s1 + j) != c)
			j++;
		i++;
	}
	*(s2 + i) = NULL;
	return (s2);
}

char	**ft_split(char const *s, char c)
{
	char	**array;
	size_t	words;

	if (!s)
		return (NULL);
	words = count_words(s, c);
	array = (char **)malloc(sizeof(char *) * (words + 1));
	if (!array)
		return (NULL);
	array = split(s, c, array, words);
	return (array);
}
