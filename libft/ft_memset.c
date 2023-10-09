/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfranco- <cfranco-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 16:06:42 by cfranco-          #+#    #+#             */
/*   Updated: 2023/09/12 19:54:52 by cfranco-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *ptr, int value, size_t len)
{
	char	*pstring;
	size_t	i;

	pstring = (char *)ptr;
	i = 0;
	while (i < len)
	{
		pstring[i] = value;
		i++;
	}
	return (ptr);
}

/*int	main(void)
{
	char alphabet[] = "123456789";

	printf("Before memset: %s\n", alphabet);
	ft_memset(alphabet, '*', 5);
	printf("After memset: %s\n", alphabet);
	return (0);
}*/

//pointer e void, por isso temos de fazer cast para type char. 
//Para isso temos de criar um ptr de char.
//este tp de pointer serve p podermos escolher apontar p um array de inteiros. 
//char, double etc.
//temos de inicializar int i para percorrer a string.
//size_t serve p trabalharmos c tamanho de arrays, p evitar q sejam nrs neg.
//retornamos pointer.
