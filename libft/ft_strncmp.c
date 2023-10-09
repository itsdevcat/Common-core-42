/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfranco- <cfranco-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 17:36:19 by cfranco-          #+#    #+#             */
/*   Updated: 2023/10/04 10:25:59 by cfranco-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	int	i;

	i = 0;
	while ((s1[i] && s2[i]) && (s1[i] == s2[i]) && n > 0)
	{
		i++;
		n--;
	}
	return (s1[i] - s2[i]);
}
/*
int	main(void)
{
	const char	*str1 = "Hello, world";
	const char	*str2 = "Hellop";

	printf("%d\n", ft_strncmp(str1, str2, 5));
	return (0);
}
*/