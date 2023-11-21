/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfranco- <cfranco-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 16:06:42 by cfranco-          #+#    #+#             */
/*   Updated: 2023/11/09 14:30:55 by cfranco-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *ptr, int value, size_t n)
{
	char	*str;
	size_t	i;

	str = (char *)ptr;
	i = 0;
	while (i < n)
	{
		str[i] = value;
		i++;
	}
	return (ptr);
}
/* 
int	main(void)
{
	char alphabet[] = "123456789";

	printf("Before memset: %s\n", alphabet);
	ft_memset(alphabet, '*', 5);
	printf("After memset: %s\n", alphabet);
	return (0);
}
 */