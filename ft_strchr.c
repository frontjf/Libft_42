/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jordfer2 <<marvin@42.fr>>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 15:40:49 by jirdfer2          #+#    #+#             */
/*   Updated: 2024/07/30 13:50:47 by jordfer2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s == (char)c)
			return ((char *)s);
		s++;
	}
	if (c == '\0')
		return ((char *)s);
	return (NULL);
}
/*
int	main(void)
{
	const char	*str = "Hello, World!";
	char		*result;

	result = ft_strchr(str, 'W');
	if (result)
		printf("ft_strchr(\"%s\", 'W') = %s\n", str, result);
	else
		printf("ft_strchr(\"%s\", 'W') = NULL\n", str);
	result = ft_strchr(str, 'z');
	if (result)
		printf("ft_strchr(\"%s\", 'z') = %s\n", str, result);
	else
		printf("ft_strchr(\"%s\", 'z') = NULL\n", str);
	return (0);
}
*/
