/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jordfer2 <<marvin@42.fr>>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 20:42:13 by jirdfer2          #+#    #+#             */
/*   Updated: 2024/08/02 13:30:14 by jordfer2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <unistd.h>

void	ft_putnbr_fd(int n, int fd)
{
	if (n == -2147483648)
	{
		ft_putstr_fd("-2147483648", fd);
		return ;
	}
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		n = -n;
	}
	if (n > 9)
		ft_putnbr_fd(n / 10, fd);
	ft_putchar_fd((n % 10) + '0', fd);
}

/*
int	main(void)
{
	ft_putnbr_fd(123, STDOUT_FILENO);
	ft_putnbr_fd(-456, STDOUT_FILENO);
	ft_putnbr_fd(0, STDOUT_FILENO);
	ft_putnbr_fd(2147483647, STDOUT_FILENO);
	ft_putnbr_fd(-2147483648, STDOUT_FILENO);
	return (0);
}
*/
