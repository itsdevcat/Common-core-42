/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfranco- <cfranco-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 20:19:38 by cfranco-          #+#    #+#             */
/*   Updated: 2023/11/21 11:48:45 by cfranco-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *ptr, size_t size)
{
	ft_memset(ptr, 0, size);
}

/* int	main(void)
{
	char	buffer[20] = "Hey pessoal.";
	printf("Antes de chamar a funcao: %s\n", buffer);
	ft_bzero(buffer, ft_strlen(buffer));
	printf("Depois de chamar a funcao: %s\n", buffer);
	return (0);
} */