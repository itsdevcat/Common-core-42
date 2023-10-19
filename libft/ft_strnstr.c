/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfranco- <cfranco-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 23:13:59 by cfranco-          #+#    #+#             */
/*   Updated: 2023/10/19 14:58:10 by cfranco-         ###   ########.fr       */
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
	printf("Result:%s\n", ft_strnstr(((void*)0), "fake", 3));
	return (0);
}*/
//primeiro comparamos os char do little
//se forem iguais, continuamos a comparar com os do big ate nao serem.
