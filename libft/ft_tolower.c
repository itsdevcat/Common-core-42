/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfranco- <cfranco-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 20:24:07 by cfranco-          #+#    #+#             */
/*   Updated: 2023/10/04 10:26:05 by cfranco-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c += 32);
	return (c);
}
/*
int	main(void)
{
	printf("%c\n", ft_tolower('c'));
	printf("%c\n", ft_tolower('A'));
	printf("%c\n", ft_tolower('1'));
	printf("%c\n", ft_tolower(' '));
	return (0);
}*/
