/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfranco- <cfranco-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 23:13:59 by cfranco-          #+#    #+#             */
/*   Updated: 2023/10/05 14:56:23 by cfranco-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t n)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (!little)
		return ((char *)big);
	while ((n > i) && big[i])
	{
		while ((big[i + j] == little[j]) && big [i + j])
		{
			j++;
		}
		if (little[j] == '\0')
			return ((char *)&big[i]);
		i++;
		j = 0;
	}
	return (NULL);
}
/*
int	main(void)
{
	char	*str = "Encontra-me esta substring";
	char	*substr = "esta";
	
	printf("Result:%s\n", ft_strnstr(str, substr, 15));
	return (0);
}*/
//primeiro comparamos os char do little
//se forem iguais, continuamos a comparar com os do big ate nao serem.
