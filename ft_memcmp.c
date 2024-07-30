/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jordfer2 <<marvin@42.fr>>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 15:43:36 by jirdfer2          #+#    #+#             */
/*   Updated: 2024/07/30 14:13:26 by jordfer2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*ptr1 = s1;
	const unsigned char	*ptr2 = s2;

	while (n--)
	{
		if (*ptr1 != *ptr2)
			return (*ptr1 - *ptr2);
		ptr1++;
		ptr2++;
	}
	return (0);
}
/*
int	main(void)
{
	const char	str1[] = "Hello, World!";
	const char	str2[] = "Hello, World!";
	const char	str3[] = "Hello, Worrd!";

	str1[] = "Hello, World!";
	str2[] = "Hello, World!";
	str3[] = "Hello, Worrd!";
	printf("ft_memcmp(\"%s\", \"%s\", %zu) = %d\n",
		str1, str2, sizeof(str1), ft_memcmp(str1, str2, sizeof(str1)));
	printf("ft_memcmp(\"%s\", \"%s\", %zu) = %d\n",
		str1, str3, sizeof(str1), ft_memcmp(str1, str3, sizeof(str1)));
	printf("ft_memcmp(\"%s\", \"%s\", %zu) = %d\n",
		str1, str3, 6, ft_memcmp(str1, str3, 6));
	return (0);
}
*/
