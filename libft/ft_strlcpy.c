/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfranco- <cfranco-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 11:59:34 by cfranco-          #+#    #+#             */
/*   Updated: 2023/11/09 12:38:56 by cfranco-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	srclen;

	srclen = ft_strlen(src);
	i = 0;
	if ((!dst && !src) || size == 0)
		return (srclen);
	while (src[i] && i < size - 1)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (srclen);
}
/*
int main(void)
{
	char	*s1 = "oooo";
	char	s2[40] = "Paralelipipedo";
	
    printf("Lenght of src string: %ld\n", ft_strlcpy(s2, s1, 4));
    printf("Result of the copied string: %s\n", s2);
    return (0);
}*/
