/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jordfer2 <<marvin@42.fr>>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 14:32:26 by jirdfer2          #+#    #+#             */
/*   Updated: 2024/08/01 13:34:03 by jordfer2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	return (c);
}

/*
int	main(void)
{
	printf("ft_toupper('a') = %c\n", ft_toupper('a'));
	printf("ft_toupper('z') = %c\n", ft_toupper('z'));
	printf("ft_toupper('A') = %c\n", ft_toupper('A'));
	printf("ft_toupper('Z') = %c\n", ft_toupper('Z'));
	printf("ft_toupper('1') = %c\n", ft_toupper('1'));

	return (0);
}
*/
