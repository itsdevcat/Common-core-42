/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfranco- <cfranco-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 23:13:59 by cfranco-          #+#    #+#             */
/*   Updated: 2023/11/09 11:38:13 by cfranco-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// big[i] serve apenas para dar segfault
char	*ft_strnstr(const char *big, const char *little, size_t n)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (!*little)
		return ((char *)big);
	if (n < ft_strlen(little) && big[i])
		return (NULL);
	while (big[i] && (n - ft_strlen(little) >= i))
	{
		j = 0;
		while ((big[i + j] == little[j]) && big [i + j] && little[j])
		{
			j++;
		}
		if (little[j] == '\0')
			return ((char *)&big[i]);
		i++;
	}
	return (NULL);
}
/*
int	main(void)
{
	char	*s1 = "Eu gosto de arroz, feijao e batata.";
	char	*s2 = ",";
	printf("%s\n", ft_strnstr(s1, s2, 30));
	return (0);
}*/