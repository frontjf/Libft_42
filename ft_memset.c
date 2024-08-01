/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jordfer2 <<marvin@42.fr>>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/13 18:37:26 by jordfer2          #+#    #+#             */
/*   Updated: 2024/08/01 12:25:58 by jordfer2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	*ft_memset(void *s, int c, size_t n)
{
	char	*str;
	size_t	i;

	str = (char *)s;
	i = 0;
	while (i < n)
	{
		str[i] = c;
		i++;
	}
	return (s);
}

/*
int	main(void)
{
	char	str[11];
	char	*result;

	ft_memset(str, ' ', sizeof(str) - 1);
	str[10] = '\0';
	printf("Before memset: \"%s\"\n", str);
	result = ft_memset(str, 'A', 5);
	printf("After memset:  \"%s\"\n", str);
	printf("Result pointer: \"%s\"\n", result);

	return (0);
}
*/
