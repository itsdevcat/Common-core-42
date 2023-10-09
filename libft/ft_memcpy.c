/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfranco- <cfranco-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 17:56:29 by cfranco-          #+#    #+#             */
/*   Updated: 2023/09/12 19:52:29 by cfranco-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	const char		*psrc;
	unsigned char	*pdest;
	size_t			i;

	i = 0;
	psrc = (const char *)src;
	pdest = (unsigned char *)dest;
	if (!dest && !src)
		return (dest);
	while (i < n)
	{
		pdest[i] = psrc[i];
		i++;
	}
	return (dest);
}

/*int	main(void)
{
	char	s1[30] = "Paralelipipedo!";
	char	s2[30];

	printf("Before memcopy: %s\n", s2);
	ft_memcpy(s2, s1, 5);
	printf("After memcopy: %s\n", s2);
	return (0);
}*/
