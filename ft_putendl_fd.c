/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jordfer2 <<marvin@42.fr>>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 20:41:32 by jirdfer2          #+#    #+#             */
/*   Updated: 2024/07/30 13:19:42 by jordfer2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	if (s)
	{
		write(fd, s, ft_strlen(s));
		write(fd, "\n", 1);
	}
}

/*
int	main(void)
{
	ft_putendl_fd("Hello, World!", STDOUT_FILENO);
	ft_putendl_fd("42 is awesome!", STDOUT_FILENO);
	ft_putendl_fd("This is a test.", STDOUT_FILENO);

	return (0);
}
*/
