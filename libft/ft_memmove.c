/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfranco- <cfranco-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 22:29:31 by cfranco-          #+#    #+#             */
/*   Updated: 2023/11/21 11:32:31 by cfranco-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	const char	*s;
	char		*d;

	d = dest;
	s = src;
	if (!dest && !src)
		return (dest);
	if (dest < src)
		return (ft_memcpy(dest, src, n));
	while (n--)
	{
		d[n] = s[n];
	}
	return (dest);
}
/* 
int	main(void)
{
	char	s1[10] = "Copia esta";
	char	s2[15];
	ft_memmove(s2, s1, 10);
	printf("%s\n", s2);
	memmove(s2, s1, 10);
	printf("%s\n", s2);
	return (0);
} */
