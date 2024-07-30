/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jordfer2 <<marvin@42.fr>>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 17:08:33 by jordfer2          #+#    #+#             */
/*   Updated: 2024/07/30 13:28:19 by jordfer2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

size_t	ft_strlen(const char *c)
{
	size_t	i;

	i = 0;
	while (c[i] != '\0')
		i++;
	return (i);
}

/*
int	main(void)
{
	printf("Length of 'Hello, World!' = %zu\n", ft_strlen("Hello, World!"));
	printf("Length of '42 is great!' = %zu\n", ft_strlen("42 is great!"));
	printf("Length of '' = %zu\n", ft_strlen(""));
	printf("Length of 'A' = %zu\n", ft_strlen("A"));
	printf("Length of 'Libft' = %zu\n", ft_strlen("Libft"));

	return (0);
}
*/
