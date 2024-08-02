/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jordfer2 <<marvin@42.fr>>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/07 19:59:12 by jordfer2          #+#    #+#             */
/*   Updated: 2024/08/02 13:17:44 by jordfer2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}

/*
int	main(void)
{
	printf("ft_isascii(65) = %d\n", ft_isascii(65));
	printf("ft_isascii(127) = %d\n", ft_isascii(127));
	printf("ft_isascii(128) = %d\n", ft_isascii(128));
	printf("ft_isascii(-1) = %d\n", ft_isascii(-1));
	printf("ft_isascii(0) = %d\n", ft_isascii(0));
	return (0);
}
*/ 