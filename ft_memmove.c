/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jordfer2 <<marvin@42.fr>>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 13:41:53 by jirdfer2          #+#    #+#             */
/*   Updated: 2024/08/01 12:20:24 by jordfer2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char		*d;
	const unsigned char	*s;

	if (!dst && !src)
		return (NULL);
	d = dst;
	s = src;
	if (d < s)
		while (len--)
			*d++ = *s++;
	else
	{
		d += len;
		s += len;
		while (len--)
			*--d = *--s;
	}
	return (dst);
}
/*
int	main(void)
{
	char	str[] = "1234567890";
	char	*result;

	printf("Original: %s\n", str);
	result = ft_memmove(str + 4, str, 6); // Solapamiento de memoria
	printf("After memmove: %s\n", str);
	printf("Result Pointer: %s\n", result);

	return (0);
}
*/