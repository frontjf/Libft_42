/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jordfer2 <<marvin@42.fr>>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 15:22:43 by jirdfer2          #+#    #+#             */
/*   Updated: 2024/08/02 15:28:58 by jordfer2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + 32);
	return (c);
}

/*
int	main(void)
{
	printf("ft_tolower('A') = %c\n", ft_tolower('A'));
	printf("ft_tolower('Z') = %c\n", ft_tolower('Z'));
	printf("ft_tolower('a') = %c\n", ft_tolower('a'));
	printf("ft_tolower('z') = %c\n", ft_tolower('z'));
	printf("ft_tolower('1') = %c\n", ft_tolower('1'));
	return (0);
}
*/
