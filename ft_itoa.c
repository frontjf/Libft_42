/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jirdfer2 <<marvin@42.fr>>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 20:37:57 by jirdfer2          #+#    #+#             */
/*   Updated: 2024/07/15 20:38:10 by jirdfer2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	num_len(int n)
{
	size_t	len;

	len = 1;
	while (n /= 10)
		len++;
	return (len);
}

char	*ft_itoa(int n)
{
	char	*str;
	size_t	len;
	unsigned int	nbr;

	len = num_len(n);
	if (n < 0)
	{
		nbr = -n;
		len++;
	}
	else
		nbr = n;
	str = (char *)malloc((len + 1) * sizeof(char));
	if (!str)
		return (NULL);
	str[len] = '\0';
	while (len--)
	{
		str[len] = nbr % 10 + '0';
		nbr /= 10;
	}
	if (n < 0)
		str[0] = '-';
	return (str);
}