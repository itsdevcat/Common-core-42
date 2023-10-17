/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfranco- <cfranco-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 15:12:12 by cfranco-          #+#    #+#             */
/*   Updated: 2023/10/13 15:29:52 by cfranco-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	i;

	i = 0;
	if (ft_strlen(s) - start > len)
		sub = (char *)malloc((len + 1) * sizeof(char *));
	else
		sub = (char *)malloc((ft_strlen(s) + 1) * sizeof(char *));
	if (!sub)
		return (NULL);
	if (start < ft_strlen(s))
	{
		while (s[i + start] && i < len)
		{
			sub[i] = s[i + start];
			i++;
		}
	}
	sub[i] = '\0';
	return (sub);
}
/*
int	main(void)
{
	char	*s2 = ft_substr("tripouille", 0, 20);
	
	printf("%s\n", s2);
	free(s2);
	return (0);
}*/