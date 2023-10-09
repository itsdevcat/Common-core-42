/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfranco- <cfranco-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 15:12:12 by cfranco-          #+#    #+#             */
/*   Updated: 2023/10/06 15:38:14 by cfranco-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	i;
	
	i = 0;
	sub = (char *)malloc(len + 1 * sizeof(char *));
	if (!sub)
		return (NULL);
	while (s[i + start] && i < len)
	{
		sub[i] = s[i + start];
		i++;
	}
	return (sub);
}
/*
int	main(void)
{
	char	*s1 = "Hello, world!";
	char	*s2 = ft_substr(s1, 3, 5);
	
	printf("%s\n", s2);
	free(s2);
	return (0);
}*/