/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jordfer2 <<marvin@42.fr>>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/07 19:52:00 by jordfer2          #+#    #+#             */
/*   Updated: 2024/07/30 12:59:07 by jordfer2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	ft_isalnum(int c)
{
	if ((c >= 48 && c <= 57) || (c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	return (0);
}

/*
int	main(void)
{
	
	printf("ft_isalnum('A') = %d\n", ft_isalnum('A'));
	printf("ft_isalnum('z') = %d\n", ft_isalnum('z'));
	printf("ft_isalnum('9') = %d\n", ft_isalnum('9'));
	printf("ft_isalnum(' ') = %d\n", ft_isalnum(' '));
	printf("ft_isalnum('#') = %d\n", ft_isalnum('#'));

	return (0);
} */
