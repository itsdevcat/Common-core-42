/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfranco- <cfranco-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 22:29:31 by cfranco-          #+#    #+#             */
/*   Updated: 2023/10/04 11:52:48 by cfranco-         ###   ########.fr       */
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
	char	*str1 = "Copia esta";
	char	dest[10];
	ft_memmove(dest, str1, 10);
	printf("%s\n", dest);
	memmove(dest, str1, 10);
	printf("%s\n", dest);
	return (0);
}*/
//n-- decrementa e dps verifica se e maior q 0.