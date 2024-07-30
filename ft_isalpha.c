/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jordfer2 <<marvin@42.fr>>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 15:16:14 by jordfer2          #+#    #+#             */
/*   Updated: 2024/07/30 13:00:01 by jordfer2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}
/*
int	main(void)
{
	printf("ft_isalpha('A') = %d\n", ft_isalpha('A'));  // Debería imprimir 1
	printf("ft_isalpha('z') = %d\n", ft_isalpha('z'));  // Debería imprimir 1
	printf("ft_isalpha('1') = %d\n", ft_isalpha('1'));  // Debería imprimir 0
	printf("ft_isalpha(' ') = %d\n", ft_isalpha(' '));  // Debería imprimir 0
	printf("ft_isalpha('#') = %d\n", ft_isalpha('#'));  // Debería imprimir 0

	return (0);
} */
