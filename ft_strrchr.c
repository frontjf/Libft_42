/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jordfer2 <<marvin@42.fr>>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 15:41:40 by jirdfer2          #+#    #+#             */
/*   Updated: 2024/08/01 13:30:33 by jordfer2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strrchr(const char *s, int c)
{
	const char	*last = NULL;

	while (*s)
	{
		if (*s == (char)c)
			last = s;
		s++;
	}
	if (c == '\0')
		return ((char *)s);
	return ((char *)last);
}

/*
int	main(void)
{
	const char	*str;
	char		*result;

	str = "hello world";
	result = ft_strrchr(str, 'o');
	if (result)
	{
		printf("Found '%c' at position: %ld\n", 'o', result - str);
	}
	else
	{
		printf("'o' not found\n");
	}

	result = ft_strrchr(str, 'z');
	if (result)
	{
		printf("Found '%c' at position: %ld\n", 'z', result - str);
	}
	else
	{
		printf("'z' not found\n");
	}

	result = ft_strrchr(str, '\0');
	if (result)
	{
		printf("Found null terminator at position: %ld\n", result - str);
	}
	else
	{
		printf("Null terminator not found\n");
	}

	return (0);
}
*/