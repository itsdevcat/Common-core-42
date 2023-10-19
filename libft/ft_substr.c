/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfranco- <cfranco-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 15:12:12 by cfranco-          #+#    #+#             */
/*   Updated: 2023/10/19 16:59:39 by cfranco-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	i;

	i = 0;
	if (!s)
		return (NULL);
	if (!len || ft_strlen(s) < start)
		return (ft_strdup(""));
	if (ft_strlen(s) - start > len)
		sub = (char *)malloc((len + 1) * sizeof(char));
	else
		sub = (char *)malloc((ft_strlen(s) - start + 1) * sizeof(char));
	if (!sub)
		return (NULL);
	while (s[i + start] && i < len)
	{
		sub[i] = s[i + start];
		i++;
	}
	sub[i] = '\0';
	return (sub);
}
/*
int	main(void)
{
	char	*s2 = ft_substr("0123456789", 9, 10);
	
	printf("%s\n", s2);
	free(s2);
	return (0);
}*/