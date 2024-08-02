/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jordfer2 <<marvin@42.fr>>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 14:25:00 by jirdfer2          #+#    #+#             */
/*   Updated: 2024/08/02 13:34:37 by jordfer2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;

	if (!dst)
		return (ft_strlen(src));
	i = 0;
	if (dstsize > 0)
	{
		while (src[i] && i < dstsize - 1)
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (ft_strlen(src));
}

/*
int	main(void)
{
	char	dst[20];
	const char	*src = "Hello, World!";
	size_t	dstsize;

	dstsize = sizeof(dst);
	memset(dst, 'x', sizeof(dst));
	printf("Before strlcpy: %s\n", dst);
	ft_strlcpy(dst, src, dstsize);
	printf("After strlcpy: %s\n", dst);
	printf("Length of source string: %zu\n", ft_strlen(src));
	return (0);
}
*/