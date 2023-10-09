/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfranco- <cfranco-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 12:10:34 by cfranco-          #+#    #+#             */
/*   Updated: 2023/10/09 13:40:10 by cfranco-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*void	ft_testprintcharwithindex(unsigned int i, char *c)
{
	printf("Character at index %u is: %c\n", i, c[i]);
}*/

void ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	size_t	i;
	
	i = 0;
	while(s[i])
	{
		(*f)(i, s);
		i++;
	}
}
/*
int	main(void)
{
	char	*s1 = "Hello!";
	
	ft_striteri(s1, ft_testprintcharwithindex);
	return (0);
}*/