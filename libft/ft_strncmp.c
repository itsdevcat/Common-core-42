/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfranco- <cfranco-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 17:36:19 by cfranco-          #+#    #+#             */
/*   Updated: 2023/10/13 14:31:26 by cfranco-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n && (s1[i] || s2[i]))
	{
		if (s1[i] == s2[i])
			i++;
		else
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
	}
	return (0);
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

//unsigned char pq char negativo c char negativo da smp negativo, n da valor
//certo da comparacao.