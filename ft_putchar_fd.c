/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jordfer2 <<marvin@42.fr>>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 20:40:20 by jirdfer2          #+#    #+#             */
/*   Updated: 2024/08/02 13:29:32 by jordfer2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <unistd.h>

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

/*
int	main(void)
{
	ft_putchar_fd('A', STDOUT_FILENO);
	ft_putchar_fd('b', STDOUT_FILENO);
	ft_putchar_fd('1', STDOUT_FILENO);
	ft_putchar_fd('\n', STDOUT_FILENO);
	ft_putchar_fd('!', STDOUT_FILENO);
	return (0);
}
*/
