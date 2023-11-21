/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfranco- <cfranco-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 15:12:13 by cfranco-          #+#    #+#             */
/*   Updated: 2023/10/24 15:17:20 by cfranco-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int a)
{
	return (ft_isalpha(a) || ft_isdigit(a));
}
/*
int	main(void)
{
	char	c;

	c = '0';

	if (ft_isalnum(c))
		printf("Its alphanumeric.\n");
	else
		printf("Its not alphanumeric.\n");
	return (0);
}*/