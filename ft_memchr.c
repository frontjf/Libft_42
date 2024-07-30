/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jordfer2 <<marvin@42.fr>>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 15:42:55 by jirdfer2          #+#    #+#             */
/*   Updated: 2024/07/30 14:05:02 by jordfer2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*ptr = s;

	while (n--)
	{
		if (*ptr == (unsigned char)c)
			return ((void *)ptr);
		ptr++;
	}
	return (NULL);
}
/*
int	main(void)
{
	const char	str[] = "Hello, World!";
	char		*result;

	result = ft_memchr(str, 'W', sizeof(str));
	if (result != NULL)
		printf("ft_memchr(\"%s\", 'W', %zu) = %s\n", str, sizeof(str), result);
	else
		printf("ft_memchr(\"%s\", 'W', %zu) = NULL\n", str, sizeof(str));
	result = ft_memchr(str, 'z', sizeof(str));
	if (result != NULL)
		printf("ft_memchr(\"%s\", 'z', %zu) = %s\n", str, sizeof(str), result);
	else
		printf("ft_memchr(\"%s\", 'z', %zu) = NULL\n", str, sizeof(str));
	result = ft_memchr(str, '\0', sizeof(str));
	return (0);
}
*/
