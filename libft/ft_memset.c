/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabi-nak <mabi-nak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 16:37:51 by mabi-nak          #+#    #+#             */
/*   Updated: 2024/06/13 10:06:36 by mabi-nak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int c, size_t n)
{
	void	*s2;

	s2 = str;
	while (n > 0)
	{
		*(unsigned char *)str++ = (unsigned char)c;
		n--;
	}
	return (s2);
}

// #include <stdio.h>
// int main()
// {
//     unsigned char buffer[10];
//     unsigned char value = 'A';
//     size_t size = 10;
//     ft_memset(buffer, value, size);
//     printf("%s\n", buffer);
//     return 0;
// }