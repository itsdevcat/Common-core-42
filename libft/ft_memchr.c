/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfranco- <cfranco-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 10:35:52 by cfranco-          #+#    #+#             */
/*   Updated: 2023/10/19 15:02:06 by cfranco-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;		
	unsigned char	*s1;

	i = 0;
	s1 = (unsigned char *)s;
	if (n == 0)
		return (NULL);
	while (n > 0)
	{
		if (s1[i] == (unsigned char)c)
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
	char s[] = {0, 1, 2 ,3 ,4 ,5};
	if (ft_memchr(s, 2, 3))
		printf("Character found\n");
	else
		printf("character not found\n");
	return (0);
}*/
