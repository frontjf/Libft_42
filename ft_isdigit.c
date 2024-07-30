/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jordfer2 <<marvin@42.fr>>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/07 19:38:37 by jordfer2          #+#    #+#             */
/*   Updated: 2024/07/30 13:06:46 by jordfer2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	ft_isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	return (0);
}

/*
int	main(void)
{
	printf("ft_isdigit('0') = %d\n", ft_isdigit('0'));
	printf("ft_isdigit('5') = %d\n", ft_isdigit('5'));
	printf("ft_isdigit('9') = %d\n", ft_isdigit('9'));
	printf("ft_isdigit('a') = %d\n", ft_isdigit('a'));
	printf("ft_isdigit('@') = %d\n", ft_isdigit('@'));

	return (0);
}
*/
