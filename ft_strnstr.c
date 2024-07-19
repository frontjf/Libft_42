/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jordfer2 <<marvin@42.fr>>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 15:44:41 by jirdfer2          #+#    #+#             */
/*   Updated: 2024/07/19 15:35:33 by jordfer2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	nlen;

	if (!*needle)
		return ((char *)haystack);
	nlen = ft_strlen(needle);
	while (*haystack && len >= nlen)
	{
		if (!ft_strncmp(haystack, needle, nlen))
			return ((char *)haystack);
		haystack++;
		len--;
	}
	return (NULL);
}
