/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jordfer2 <<marvin@42.fr>>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/13 18:53:20 by jordfer2          #+#    #+#             */
/*   Updated: 2024/08/02 15:17:01 by jordfer2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;

	if (!dst && !src)
		return (NULL);
	d = dst;
	s = src;
	while (n--)
		*d++ = *s++;
	return (dst);
}

/*
int	main(void)
{
	char	str[] = "Hello, World!";
	char	result[50];

	ft_memcpy(result, str, 6);
	result[6] = '\0';
	printf("Original: %s\n", str);
	printf("Modified: %s\n", result);
	return (0);
}

*/
