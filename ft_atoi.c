/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jordfer2 <<marvin@42.fr>>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 15:45:20 by jirdfer2          #+#    #+#             */
/*   Updated: 2024/07/29 13:55:38 by jordfer2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	ft_atoi(const char *str)
{
	int	result;
	int	sign;

	result = 0;
	sign = 1;
	while ((*str >= 9 && *str <= 13) || *str == ' ')
		str++;
	if (*str == '-' || *str == '+')
		if (*str++ == '-')
			sign = -1;
	while (*str >= '0' && *str <= '9')
		result = result * 10 + (*str++ - '0');
	return (result * sign);
}

/*
 void	test_ft_atoi(const char *str)
{
	printf("Input: \"%s\" -> Output: %d\n", str, ft_atoi(str));
}

int	main(void)
{
	test_ft_atoi("42");
	test_ft_atoi("   -42");
	test_ft_atoi("4193 with words");
	test_ft_atoi("words and 987");
	test_ft_atoi("-91283472332");
	test_ft_atoi("+-123");
	test_ft_atoi("  +0");
	test_ft_atoi("9223372036854775807");
	test_ft_atoi("-9223372036854775808");
	return (0);
}
*/
