/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfranco- <cfranco-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 20:19:38 by cfranco-          #+#    #+#             */
/*   Updated: 2023/10/06 14:33:48 by cfranco-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *ptr, size_t size)
{
	ft_memset(ptr, 0, size);
}
/*
int	main(void)
{
	char	buffer[20];

	ft_bzero(buffer, sizeof(buffer));
	printf("%s\n", buffer);
	return (0);
}*/