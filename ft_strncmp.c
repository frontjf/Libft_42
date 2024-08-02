/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jordfer2 <<marvin@42.fr>>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 15:42:20 by jirdfer2          #+#    #+#             */
/*   Updated: 2024/08/02 15:26:52 by jordfer2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	while (n && (*s1 || *s2))
	{
		if (*s1 != *s2)
			return (*(unsigned char *)s1 - *(unsigned char *)s2);
		s1++;
		s2++;
		n--;
	}
	return (0);
}
/*
int	main(void)
{
	char	str1[] = "hello";
	char	str2[] = "hellp";
	int	result;

	result = ft_strncmp(str1, str2, 4);
	printf("ft_strncmp(\"%s\", \"%s\", 4) = %d\n", str1, str2, result);
	result = ft_strncmp(str1, str2, 5);
	printf("ft_strncmp(\"%s\", \"%s\", 5) = %d\n", str1, str2, result);
	result = ft_strncmp(str1, "hell", 4);
	printf("ft_strncmp(\"%s\", \"hell\", 4) = %d\n", str1, result);
	return (0);
}
*/
