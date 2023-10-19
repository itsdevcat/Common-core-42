/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfranco- <cfranco-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 14:18:17 by cfranco-          #+#    #+#             */
/*   Updated: 2023/10/19 17:07:24 by cfranco-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == (char)c)
			return ((char *)s + i);
		i++;
	}
	if (s[i] == (char)c)
		return ((char *)s + i);
	return (NULL);
}
/*
int	main(void)
{
	char 	test[] = "tripouille";
	char	*s = ft_strchr(test, 't' + 256);
	char	*s2 = strchr(test, 't' + 256);
	
	printf("%s\n%s\n", s, s2);
	return (0);
}*/