/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfranco- <cfranco-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 22:03:56 by cfranco-          #+#    #+#             */
/*   Updated: 2023/11/06 12:48:07 by cfranco-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *ptr1, const void *ptr2, size_t n)
{
	const char unsigned	*p1;
	const char unsigned	*p2;
	size_t				i;

	p1 = (const char unsigned *)ptr1;
	p2 = (const char unsigned *)ptr2;
	i = 0;
	while (i < n)
	{
		if (p1[i] == p2[i])
			i++;
		else
			return (p1[i] - p2[i]);
	}
	return (0);
}
/*
int	main(void)
{
	printf("%d\n", ft_memcmp("Hey", "Hello", 2));
	return (0);
}*/
