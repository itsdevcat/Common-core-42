/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfranco- <cfranco-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 15:30:50 by cfranco-          #+#    #+#             */
/*   Updated: 2023/11/09 11:38:47 by cfranco-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	strend;

	strend = ft_strlen(s);
	if (!s)
		return (NULL);
	while (strend >= 0)
	{
		if (s[strend] == (char)c)
			return ((char *)s + strend);
		strend--;
	}
	return (NULL);
}
/*
int	main(void)
{
	char	*str = "abcdefghiabc";
	char	*s = ft_strrchr(str, 'x');
	
	printf("%s\n", s);
	return (0);
}*/