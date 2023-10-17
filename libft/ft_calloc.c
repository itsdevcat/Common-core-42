/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfranco- <cfranco-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 15:03:20 by cfranco-          #+#    #+#             */
/*   Updated: 2023/10/11 14:13:00 by cfranco-         ###   ########.fr       */
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
/*
int	main(void)
{
	char	*str;
	
	str = (char *)ft_calloc(5, sizeof(char));
	printf("%s", str);
	free(str);
	return (0);
}*/
/* The  calloc()  function  allocates memory for an array 
of n elements 
(of size bytes each) and returns a pointer to the allocated memory.  
	   
	   The memory is set to zero.  If n or size is  0,
       then  calloc()  returns  either  NULL, or a unique pointer 
	   value 
	   that can later be successfully
       passed to free().  
	   
	   If the multiplication of nmemb and size would result  in  
	   integer 
	    overflow,
       then  calloc() returns an error.  
	   

		   return value: return a pointer to the allocated memory, on 
		   error, returns NULL.
		   strlen(str) + 1 é usada para determinar o tamanho da memória 
		   que deve ser alocada para armazenar a string str, 
		   incluindo o caractere nulo '\0' no final.
*/

//A função calloc em C aloca memória para um array de elementos e 
/*inicializa todos os bytes alocados com zero. */