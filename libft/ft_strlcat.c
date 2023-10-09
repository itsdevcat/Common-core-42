/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfranco- <cfranco-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 19:55:29 by cfranco-          #+#    #+#             */
/*   Updated: 2023/09/14 10:43:00 by cfranco-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	dlen;
	size_t	srcadd;

	i = 0;
	dlen = ft_strlen(dest);
	srcadd = dlen;
	if (size != 0)
	{
		while (srcadd < size - 1 && i < ft_strlen(src))
		{
			dest[dlen] = src[i];
			i++;
			dlen++;
		}
		if (dlen < size)
			dest[dlen] = '\0';
		dest[dlen] = '\0';
	}
	if (dlen > size)
		return (dlen + ft_strlen(src));
	return (size + ft_strlen(src));
}

/*int	main(void)
{
	char		dest[20] = "Hello, ";
    const char *src = "!";
	size_t		result;

	result = (long unsigned int)dest;
	printf("Before strlcat: %zu\n", result);
	result = ft_strlcat(dest, src, sizeof(dest));
	printf("After strlcat: %zu\n", result);
	printf("Concatenated String: %s\n", dest);
	return (0);
}*/
