/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfranco- <cfranco-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 16:01:28 by cfranco-          #+#    #+#             */
/*   Updated: 2023/10/04 10:25:33 by cfranco-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int d)
{
	return (d >= '0' && d <= '9');
}
/*
int	main(void)
{
	printf("%d\n", ft_isdigit('a'));
	printf("%d\n", ft_isdigit('9'));
	printf("%d\n", ft_isdigit(49));
	printf("%d\n", ft_isdigit('!'));
	return (0);
}*/