/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jordfer2 <<marvin@42.fr>>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 15:44:41 by jirdfer2          #+#    #+#             */
/*   Updated: 2024/08/01 13:07:16 by jordfer2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

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

/*
int	main(void)
{
	char big_string[] = "Hello, world!";
	char sub_string1[] = "world";
	char sub_string2[] = "planet";

	char *result;

	result = ft_strnstr(big_string, sub_string1, 13);
	printf("ft_strnstr(\"%s\", \"%s\", 13) = %s\n", big_string, sub_string1, result ? result : "NULL");

	result = ft_strnstr(big_string, sub_string2, 13);
	printf("ft_strnstr(\"%s\", \"%s\", 13) = %s\n", big_string, sub_string2, result ? result : "NULL");

	result = ft_strnstr(big_string, sub_string1, 5);
	printf("ft_strnstr(\"%s\", \"%s\", 5) = %s\n", big_string, sub_string1, result ? result : "NULL");

	return (0);
}
*/
