/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jordfer2 <<marvin@42.fr>>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 20:38:42 by jirdfer2          #+#    #+#             */
/*   Updated: 2024/08/01 13:02:33 by jordfer2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*map;
	size_t	i;

	if (!s || !f)
		return (NULL);
	map = (char *)malloc((ft_strlen(s) + 1) * sizeof(char));
	if (!map)
		return (NULL);
	i = 0;
	while (s[i])
	{
		map[i] = f(i, s[i]);
		i++;
	}
	map[i] = '\0';
	return (map);
}

/*
char	increment_char(unsigned int index, char c)
{
	return (c + 1);
}

int	main(void)
{
	char	str[] = "abc";
	char	*result;

	result = ft_strmapi(str, increment_char);
	if (result)
	{
		printf("Original: %s\n", str);
		printf("Mapped: %s\n", result);
		free(result);
	}
	return (0);
}
*/
