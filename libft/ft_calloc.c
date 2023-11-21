/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfranco- <cfranco-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 15:03:20 by cfranco-          #+#    #+#             */
/*   Updated: 2023/11/21 11:55:48 by cfranco-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t n_elements, size_t n_size)
{
	void	*ptr;

	ptr = malloc(n_elements * n_size);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, n_elements * n_size);
	return (ptr);
}

/* int	main(void)
{
	char	*buffer = "Hey pessoal.";
	printf("Antes de chamar a funcao: %s\n", buffer);
	buffer = (char *)ft_calloc(ft_strlen(buffer) + 1, sizeof(char));
	printf("Depois de chamar a funcao: %s\n", buffer);
	free(buffer);
	return (0);
} */