/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jordfer2 <<marvin@42.fr>>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/13 18:51:30 by jordfer2          #+#    #+#             */
/*   Updated: 2024/08/01 12:07:00 by jordfer2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

void	ft_bzero(void *s, size_t n)
{
	char	*str;

	str = (char *)s;
	while (n > 0)
	{
		*str = '\0';
		str++;
		n--;
	}
}

/*

int	main(void)
{
	char	buffer[11];

	strcpy(buffer, "HelloWorld");
	printf("Before ft_bzero: %s\n", buffer);

	ft_bzero(buffer + 5, 6); // Nullify "World"
	printf("After ft_bzero: %s\n", buffer);

	return (0);
}
*/
