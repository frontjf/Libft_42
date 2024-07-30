/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jordfer2 <<marvin@42.fr>>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 17:55:41 by jordfer2          #+#    #+#             */
/*   Updated: 2024/07/30 13:10:05 by jordfer2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}

/*
int	main(void)
{
	printf("ft_isprint(' ') = %d\n", ft_isprint(' '));
	printf("ft_isprint('A') = %d\n", ft_isprint('A'));
	printf("ft_isprint('z') = %d\n", ft_isprint('z'));
	printf("ft_isprint('~') = %d\n", ft_isprint('~'));
	printf("ft_isprint(31) = %d\n", ft_isprint(31));
	printf("ft_isprint(127) = %d\n", ft_isprint(127));

	return (0);
}
*/