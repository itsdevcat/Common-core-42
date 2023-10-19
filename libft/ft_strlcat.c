/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfranco- <cfranco-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 19:55:29 by cfranco-          #+#    #+#             */
/*   Updated: 2023/10/19 14:52:08 by cfranco-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	destlen;
	size_t	i;

	destlen = ft_strlen(dest);
	i = 0;
	if (size <= destlen)
		return (size + ft_strlen(src));
	while (src[i] && destlen < size - 1)
	{
		dest[destlen] = src[i];
		i++;
		destlen++;
	}
	dest[destlen] = '\0';
	return (ft_strlen(dest) + ft_strlen(&src[i]));
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
