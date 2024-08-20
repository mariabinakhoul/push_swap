/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabi-nak <mabi-nak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 16:48:06 by mabi-nak          #+#    #+#             */
/*   Updated: 2024/06/17 10:32:49 by mabi-nak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcpy(char *dest, const char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strdup(const char *src)
{
	int		len;
	char	*smt;

	len = ft_strlen(src);
	smt = (char *) malloc((len +1) * sizeof(char));
	if (smt == NULL)
		return (NULL);
	ft_strcpy(smt, src);
	return (smt);
}

// #include <stdio.h>
// int main(void)
// {
// 	char *src = "maria is the best";

// 	printf("%s\n", ft_strdup(src));
// 	return (0);
// }