/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jordfer2 <<marvin@42.fr>>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 20:31:46 by jirdfer2          #+#    #+#             */
/*   Updated: 2024/08/01 12:08:35 by jordfer2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;

	ptr = malloc(count * size);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, count * size);
	return (ptr);
}

/*
int	main(void)
{
	int		*array;
	size_t	i;
	size_t	count;

	count = 5;
	array = (int *)ft_calloc(count, sizeof(int));
	if (array == NULL)
	{
		printf("Memory allocation failed\n");
		return (1);
	}

	printf("Array elements after ft_calloc: ");
	i = 0;
	while (i < count)
	{
		printf("%d ", array[i]);
		i++;
	}
	printf("\n");

	free(array);
	return (0);
}
*/
