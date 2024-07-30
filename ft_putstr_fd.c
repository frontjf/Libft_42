/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jordfer2 <<marvin@42.fr>>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 20:40:58 by jirdfer2          #+#    #+#             */
/*   Updated: 2024/07/30 13:23:39 by jordfer2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <unistd.h>

void	ft_putstr_fd(char *s, int fd)
{
	if (s)
		write(fd, s, ft_strlen(s));
}

/*
int	main(void)
{
	ft_putstr_fd("Hello, World!\n", STDOUT_FILENO);
	ft_putstr_fd("42 is great!\n", STDOUT_FILENO);
	ft_putstr_fd("Testing ft_putstr_fd.\n", STDOUT_FILENO);

	return (0);
}
*/
