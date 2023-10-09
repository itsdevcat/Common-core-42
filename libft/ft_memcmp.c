/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfranco- <cfranco-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 22:03:56 by cfranco-          #+#    #+#             */
/*   Updated: 2023/10/04 10:25:43 by cfranco-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *ptr1, const void *ptr2, size_t num)
{
	const char	*p1;
	const char	*p2;
	size_t		i;

	p1 = (const char *)ptr1;
	p2 = (const char *)ptr2;
	i = 0;
	while (i < num && (p1[i] == p2[i]))
	{
		i++;
	}
	return (p1[i] - p2[i]);
}

/*int	main(void)
{
	const char	buffer[] = "Banana";
	const char	buffer2[] = "Banana";

	printf("%d\n", ft_memcmp(buffer, buffer2, 5));
	return (0);
}*/
