/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfranco- <cfranco-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 19:29:38 by cfranco-          #+#    #+#             */
/*   Updated: 2023/10/19 14:51:36 by cfranco-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c -= 32);
	else
		return (c);
}
/*
int	main(void)
{
	printf("%c\n", ft_toupper('A'));
	printf("%c\n", ft_toupper('c'));
	printf("%c\n", ft_toupper('1'));
	printf("%c\n", ft_toupper(' '));
	return (0);
}*/
