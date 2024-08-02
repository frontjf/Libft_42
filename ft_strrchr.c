/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jordfer2 <<marvin@42.fr>>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 15:41:40 by jirdfer2          #+#    #+#             */
/*   Updated: 2024/08/02 13:37:12 by jordfer2         ###   ########.fr       */
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
		printf("Last 'o': %s\n", result);
	else
		printf("'o' not found\n");
	result = ft_strrchr(str, 'z');
	if (result)
		printf("'z' found: Yes\n");
	else
		printf("'z' found: No\n");
	result = ft_strrchr(str, '\0');
	if (result)
		printf("Null terminator at: %s\n", result);
	return (0);
}
*/