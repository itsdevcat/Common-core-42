/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfranco- <cfranco-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 10:35:52 by cfranco-          #+#    #+#             */
/*   Updated: 2023/10/04 11:51:40 by cfranco-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	int				i;		
	unsigned char	*s1;

	i = 0;
	s1 = (unsigned char *)s;
	while (s1[i] && n > 0)
	{
		if (s1[i] == c)
		{
			return (s1 + i);
		}
		i++;
		n--;
	}
	return (NULL);
}
/*
int	main(void)
{
	char	*str = "Ola pessoas";
	if (ft_memchr(str, 'd', 5))
		printf("Character found\n");
	else
		printf("character not found\n");
	return (0);
}*/
